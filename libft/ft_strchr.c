/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:02:30 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 16:42:36 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "teste";

	printf("%s\n", ft_strchr(str, 'e'));
	printf("%s\n", ft_strchr(str, '\0'));
	printf("%s\n", ft_strchr(str, 'x'));
	return (0);
}*/
