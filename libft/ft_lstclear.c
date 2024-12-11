/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:59:00 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 01:52:52 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
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
	printf("List before clearing:\n");
	print_list(node1);
	printf("Clearing the list:\n");
	ft_lstclear(&node1, del_content);
	if (!node1)
		printf("List after clearing: NULL\n");
	return (0);
}*/
