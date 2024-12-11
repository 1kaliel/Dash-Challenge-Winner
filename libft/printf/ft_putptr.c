/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:53:14 by efembock          #+#    #+#             */
/*   Updated: 2024/10/10 13:57:50 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putptr(unsigned long ptr, int count)
{
	if (ptr == 0)
		return (count += write(1, "(nil)", 5));
	if (write(1, "0x", 2) == -1)
		return (-1);
	return (ft_puthexa(ptr, count + 2, 'x'));
}
