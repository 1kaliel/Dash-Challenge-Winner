/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:44:57 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 21:44:22 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const void	*s;
	int			c;
	size_t		n;
	char		*result;

	s = "Supdawg?";
	c = 100;
	n = 7;
	result = ft_memchr(s, c, n);
	printf("%s\n", result);
	return (0);
}*/
