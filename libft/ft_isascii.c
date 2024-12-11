/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:09:05 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 20:20:30 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_isascii(42));
	printf("%i\n", ft_isascii(420));
	printf("%i\n", ft_isascii(52));
	printf("%i\n", ft_isascii(50));
	printf("%i\n", ft_isascii(1337));
	return (0);
}*/
