#include "marvin.h"

static void init_marvin(t_marvin *marvin)
{
    marvin->start = 0;
    marvin->goal = 0;
    marvin->columns = 0;
    marvin->rows = 0;
    marvin->string = NULL;
}

static void detect_start_and_goal(t_marvin *marvin)
{
    int i;

    i = -1;
    while (marvin->string[++i])
    {
        if (marvin->string[i] == 'M')
        {
            marvin->start = i;
            marvin->string[i] = '0';
        }
        else if (marvin->string[i] == 'G')
        {
            marvin->goal = i;
            marvin->string[i] = '0';
        }
    }
}

static void convert_txt(t_marvin *marvin, char *path)
{
    int map;
    char *output;
    char *temp;
    int len;

    marvin->string = ft_strdup("");
    map = open(path, O_RDONLY);
    output = get_next_line(map);
    if (output)
    {
        len = ft_strlen(output);
        if (len > 0 && output[len - 1] == '\n')
            output[len - 1] = '\0';
        marvin->columns = ft_strlen(output);
    }
    while (output)
    {
        marvin->rows++;
        temp = marvin->string;
        marvin->string = ft_strjoin(marvin->string, output);
        free(temp);
        free(output);
        output = get_next_line(map);
        if (output)
        {
            len = ft_strlen(output);
            if (len > 0 && output[len - 1] == '\n')
                output[len - 1] = '\0';
        }
    }
    close(map);
}

static void pq_push(t_pqitem *heap, int *size, int idx, int dist)
{
    int i = (*size)++;
    heap[i].idx = idx;
    heap[i].dist = dist;
    while (i > 0)
    {
        int p = (i - 1) / 2;
        if (heap[p].dist <= heap[i].dist)
            break;
        t_pqitem t = heap[i];
        heap[i] = heap[p];
        heap[p] = t;
        i = p;
    }
}

static t_pqitem pq_pop(t_pqitem *heap, int *size)
{
    t_pqitem top = heap[0];
    (*size)--;
    heap[0] = heap[*size];
    int i = 0;
    while (1)
    {
        int l = 2 * i + 1, r = 2 * i + 2, s = i;
        if (l < *size && heap[l].dist < heap[s].dist)
            s = l;
        if (r < *size && heap[r].dist < heap[s].dist)
            s = r;
        if (s == i)
            break;
        t_pqitem t = heap[i];
        heap[i] = heap[s];
        heap[s] = t;
        i = s;
    }
    return top;
}

static void astar(char *map, int rows, int cols, int start_idx, int goal_idx, int weight)
{
    int size = rows * cols;
    int *dist = malloc(size * sizeof(int));
    int *parent = malloc(size * sizeof(int));
    t_pqitem *heap = malloc(size * sizeof(t_pqitem));
    for (int i = 0; i < size; i++)
    {
        dist[i] = INT_MAX;
        parent[i] = -1;
    }
    dist[start_idx] = 0;
    int goal_row = goal_idx / cols;
    int goal_col = goal_idx % cols;
    int heap_size = 0;
    int sr = start_idx / cols, sc = start_idx % cols;
    int h = weight * (abs(sr - goal_row) + abs(sc - goal_col));
    pq_push(heap, &heap_size, start_idx, h);
    while (heap_size > 0)
    {
        t_pqitem cur = pq_pop(heap, &heap_size);
        int u = cur.idx;
        if (u == goal_idx)
            break;
        int ur = u / cols, uc = u % cols;
        int base_dist = dist[u];
        if (ur > 0)
        {
            int v = u - cols;
            int nd = base_dist + (map[v] - '0');
            if (nd < dist[v])
            {
                dist[v] = nd;
                parent[v] = u;
                int vr = v / cols, vc = v % cols;
                int nh = weight * (abs(vr - goal_row) + abs(vc - goal_col));
                pq_push(heap, &heap_size, v, nd + nh);
            }
        }
        if (ur < rows - 1)
        {
            int v = u + cols;
            int nd = base_dist + (map[v] - '0');
            if (nd < dist[v])
            {
                dist[v] = nd;
                parent[v] = u;
                int vr = v / cols, vc = v % cols;
                int nh = weight * (abs(vr - goal_row) + abs(vc - goal_col));
                pq_push(heap, &heap_size, v, nd + nh);
            }
        }
        if (uc > 0)
        {
            int v = u - 1;
            int nd = base_dist + (map[v] - '0');
            if (nd < dist[v])
            {
                dist[v] = nd;
                parent[v] = u;
                int vr = v / cols, vc = v % cols;
                int nh = weight * (abs(vr - goal_row) + abs(vc - goal_col));
                pq_push(heap, &heap_size, v, nd + nh);
            }
        }
        if (uc < cols - 1)
        {
            int v = u + 1;
            int nd = base_dist + (map[v] - '0');
            if (nd < dist[v])
            {
                dist[v] = nd;
                parent[v] = u;
                int vr = v / cols, vc = v % cols;
                int nh = weight * (abs(vr - goal_row) + abs(vc - goal_col));
                pq_push(heap, &heap_size, v, nd + nh);
            }
        }
    }
    if (parent[goal_idx] != -1 || goal_idx == start_idx)
    {
        int length = 0;
        for (int c = goal_idx; c != -1; c = parent[c])
            length++;
        int *path = malloc(length * sizeof(int));
        int c = goal_idx;
        for (int i = length - 1; i >= 0; i--)
        {
            path[i] = c;
            c = parent[c];
        }
        for (int i = 0; i < length - 1; i++)
        {
            int diff = path[i + 1] - path[i];
            if (diff == -cols) putchar('U');
            else if (diff == cols) putchar('D');
            else if (diff == -1) putchar('L');
            else if (diff == 1) putchar('R');
        }
        putchar('\n');
    }
}

int main(int argc, char **argv)
{
    t_marvin marvin;

    if (argc < 2)
    {
        printf("Usage: %s <map file>\\n", argv[0]);
        return 1;
    }

    init_marvin(&marvin);
    convert_txt(&marvin, argv[1]);
    detect_start_and_goal(&marvin);

    for (int weight = 5; weight >= 1; weight--)
    {
        astar(marvin.string, marvin.rows, marvin.columns, marvin.start, marvin.goal, weight);
    }

    return 0;
}
