/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 17:41:28 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 16:27:10 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == s2[i])
			i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	size_t			bytesize;
	char			*string1;
	char			*string2;

	bytesize = 6;
	string1 = "FOURTYTWO";
	string2 = "FOURTytwo";
	printf("string one is: %s\n", string1);
	printf("string two is: %s\n", string2);
	printf("bytesize: %zu\n", bytesize);
	printf("ASCII difference: %d\n", ft_strncmp(string1, string2, bytesize));
	printf("ASCII difference: %d\n", strncmp(string1, string2, bytesize));
	return (0);
}*/
