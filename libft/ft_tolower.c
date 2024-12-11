/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:51:57 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 00:25:24 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c", ft_tolower(70));
	printf("%c", ft_tolower(79));
	printf("%c", ft_tolower(85));
	printf("%c", ft_tolower(82));
	printf("%c", ft_tolower(84));
	printf("%c", ft_tolower(89));
	printf("%c", ft_tolower(84));
	printf("%c", ft_tolower(87));
	printf("%c\n", ft_tolower(79));
	return (0);
}*/
