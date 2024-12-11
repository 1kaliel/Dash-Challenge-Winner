/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:40:38 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 01:57:56 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void	print_content(void *content)
{
	printf("Content: %s\n", (char *)content);
}

void	to_uppercase(void *content)
{
	char	*str = (char *)content;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
}

int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	node1 = ft_lstnew(ft_strdup("first"));
	node2 = ft_lstnew(ft_strdup("second"));
	node3 = ft_lstnew(ft_strdup("third"));
	node1->next = node2;
	node2->next = node3;
	printf("Applying print_content function:\n");
	ft_lstiter(node1, print_content);
	printf("\nApplying to_uppercase function:\n");
	ft_lstiter(node1, to_uppercase);
	printf("\nList after applying to_uppercase:\n");
	ft_lstiter(node1, print_content);
	free(node1->content);
	free(node2->content);
	free(node3->content);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}*/
