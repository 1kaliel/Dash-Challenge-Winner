/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:03:54 by efembock          #+#    #+#             */
/*   Updated: 2024/09/15 19:22:07 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		size;
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	tmp;

	head = NULL;
	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	node3 = ft_lstnew("Node 3");
	size = ft_lstsize(head);
	printf("List size (should be 0): %d\n", size);
	head = node1;
	size = ft_lstsize(head);
	printf("List size (should be 1); %d\n", size);
	node1-> = node2;
	node2-> = node3;
	size = ft_lstsize(head);
	printf("List size (should be 3): %d\n", size);
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	return (0);
}*/
