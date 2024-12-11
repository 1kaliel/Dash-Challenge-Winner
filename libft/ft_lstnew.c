/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:13:23 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 19:55:57 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*testmedaddy;

	testmedaddy = ft_lstnew("I AM CONTENT!");
	if (!testmedaddy)
		return (1);
	else
	{
		printf("%s\n", (char *)testmedaddy->content);
		printf("%s\n", (char *)testmedaddy->next);
		free(testmedaddy);
	}
	return (0);
}*/
