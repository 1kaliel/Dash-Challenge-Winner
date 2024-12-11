/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:52:48 by efembock          #+#    #+#             */
/*   Updated: 2024/10/10 13:56:40 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_puthexa(unsigned long n, int count, char specifier)
{
	const char	*str;

	str = "0123456789abcdef";
	if (specifier == 'X')
		str = "0123456789ABCDEF";
	if (n > 15)
		count = ft_puthexa(n / 16, count, specifier);
	if (write(1, &str[n % 16], 1) == -1)
		return (-1);
	return (++count);
}
