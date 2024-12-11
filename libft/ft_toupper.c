/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:25:23 by efembock          #+#    #+#             */
/*   Updated: 2024/09/19 00:26:40 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c", ft_toupper(102));
	printf("%c", ft_toupper(111));
	printf("%c", ft_toupper(117));
	printf("%c", ft_toupper(114));
	printf("%c", ft_toupper(116));
	printf("%c", ft_toupper(121));
	printf("%c", ft_toupper(116));
	printf("%c", ft_toupper(119));
	printf("%c\n", ft_toupper(111));
	return (0);
}*/
