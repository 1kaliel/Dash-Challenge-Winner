/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:33:41 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 23:40:42 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	idest;
	size_t	isrc;

	i = 0;
	idest = 0;
	isrc = 0;
	while (idest < size && dst[idest])
		idest++;
	while (src[isrc])
		isrc++;
	if (size <= idest)
		return (size + isrc);
	while (src[i] && idest + i + 1 < size)
	{
		dst[idest + i] = src[i];
		i++;
	}
	if (idest + i < size)
		dst[idest + i] = '\0';
	return (idest + isrc);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc < 3 || argc > 3)
	{
		printf("Bro, use me like this: %s <dst> <src>\n", argv[0]);
		return (1);
	}
	printf("The strings length is: %zu\n", ft_strlcat(argv[1], argv[2], 42));
	(void)argc;
	return (0);
}*/
