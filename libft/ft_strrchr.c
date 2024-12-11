/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 16:12:40 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 00:14:54 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	ch;

	ch = 100;
	printf("%s\n", ft_strrchr("Supdawg?", ch));
	return (0);
}*/
