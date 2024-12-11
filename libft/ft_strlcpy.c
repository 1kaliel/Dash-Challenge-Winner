/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:56:49 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 16:43:40 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	buffer[42];
	size_t	length;

	if (argc < 2)
	{
		printf("Bro, use me like this: %s <src>\n", argv[0]);
		return (1);
	}
	length = ft_strlcpy(buffer, argv[1], sizeof(buffer));
	printf("Copied string: '%s'\n", buffer);
	printf("Length of source string: %zu\n", length);
	return (0);
}*/
