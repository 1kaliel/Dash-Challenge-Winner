/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:24:33 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 01:24:34 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;
	t_list	*last;

	node1 = ft_lstnew("First");
	node2 = ft_lstnew("Second");
	node3 = ft_lstnew("Third");
	node4 = ft_lstnew("Fourth");
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	last = ft_lstlast(node1);
	if (last)
		printf("last node content: %s\n", (char *)last->content);
	else
		printf("list is empty.\n");
	free(node1);
	free(node2);
	free(node3);
	free(node4);
	return (0);
}*/
