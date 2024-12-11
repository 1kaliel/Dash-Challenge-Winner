/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:27:23 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 16:41:02 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*sc;

	if (!dest && !src)
		return (NULL);
	dst = (char *)dest;
	sc = (const char *)src;
	while (n--)
	{
		*dst = *sc;
		dst++;
		sc++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "Supdawg? This is 42code.";
	char	dest[42];
	char	src2[] = "Supdawg? This is 42code.";
	char	dest2[42];

	ft_memcpy(dest, src, sizeof(src));
	memcpy(dest2, src2, sizeof(src2));
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Source2: %s\n", src2);
	printf("Destination2: %s\n", dest2);
	return (0);
}*/
