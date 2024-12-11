/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:53:04 by efembock          #+#    #+#             */
/*   Updated: 2024/10/10 14:09:01 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int n, int count)
{
	char	temp;
	long	nlong;

	nlong = n;
	if (nlong < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		count++;
		nlong = -nlong;
	}
	if (nlong > 9)
		count = ft_putnbr(nlong / 10, count);
	temp = (nlong % 10) + '0';
	if (write(1, &temp, 1) == -1)
		return (-1);
	return (++count);
}
