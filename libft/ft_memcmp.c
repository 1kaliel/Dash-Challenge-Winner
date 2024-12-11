/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:09:20 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 21:52:13 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t		bytesize;
	const void	*string1;
	const void	*string2;

	bytesize = 6;
	string1 = "FOURTYtwo";
	string2 = "FOURTYTWO";
	printf("string one is: %s\n", (char *)string1);
	printf("string two is: %s\n", (char *)string2);
	printf("bytesize: %zu\n", bytesize);
	printf("ASCII difference: %d\n", ft_memcmp(string1, string2, bytesize));
	printf("original difference: %d\n", memcmp(string1, string2, bytesize));
	return (0);
}*/
