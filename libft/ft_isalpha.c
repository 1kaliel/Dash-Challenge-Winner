/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:58:28 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 20:12:51 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_isalpha(42));
	printf("%i\n", ft_isalpha('*'));
	printf("%i\n", ft_isalpha(69));
	printf("%i\n", ft_isalpha('E'));
	printf("%i\n", ft_isalpha(70));
	printf("%i\n", ft_isalpha('F'));
	printf("%i\n", ft_isalpha(100));
	printf("%i\n", ft_isalpha('d'));
	printf("%i\n", ft_isalpha(420));
	printf("%i\n", ft_isalpha(1337));
	return (0);
}*/
