/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:53:59 by efembock          #+#    #+#             */
/*   Updated: 2024/10/10 13:59:41 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putunsigned(unsigned int n, int count)
{
	char	temp;

	if (n > 9)
		count = ft_putunsigned(n / 10, count);
	temp = (n % 10) + '0';
	if (write(1, &temp, 1) == -1)
		return (-1);
	return (++count);
}
