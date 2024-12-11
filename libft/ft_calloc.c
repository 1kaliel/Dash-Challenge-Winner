/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:54:35 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 19:00:05 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(nmemb * size);
		if (ptr)
			ft_bzero(ptr, 1);
		return (ptr);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*ptr;

	ptr = ft_calloc(5, sizeof(char));
	if (!ptr)
	{
		printf("memory allocation failed!\n");
		return (1);
	}
	puts(ptr);
	free(ptr);
	ptr = calloc(5, 0);
	if (!ptr)
	{
		printf("memory allocation failed bro!\n");
		return (1);
	}
	puts(ptr);
	free(ptr);
	return (0);
}*/
