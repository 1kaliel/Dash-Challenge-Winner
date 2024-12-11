/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:18:52 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 15:39:39 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst->content)
		del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

static void	del_content(void *content)
{
	free(content);
}

static void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew(ft_strdup("First"));
	node2 = ft_lstnew(ft_strdup("Second"));
	node3 = ft_lstnew(ft_strdup("Third"));
	node1->next = node2;
	node2->next = node3;
	printf("List before deleting node:\n");
	print_list(node1);
	printf("Deleting the second node (\"Second\"):\n");
	ft_lstdelone(node2, del_content);
	node1->next = node3;
	print_list(node1);
	ft_lstdelone(node1, del_content);
	ft_lstdelone(node3, del_content);
	return (0);
}*/
