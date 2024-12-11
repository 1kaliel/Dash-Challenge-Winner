/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:15:07 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 20:27:44 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_isprint(42));
	printf("%i\n", ft_isprint(420));
	printf("%i\n", ft_isprint(52));
	printf("%i\n", ft_isprint(50));
	return (0);
}*/
