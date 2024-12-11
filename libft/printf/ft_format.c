/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:51:22 by efembock          #+#    #+#             */
/*   Updated: 2024/10/10 14:09:19 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_format(const char *format, va_list args)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i += ft_putchar((char)va_arg(args, int));
	else if (*format == 's')
		i += ft_putstr(va_arg(args, char *));
	else if (*format == 'd' || *format == 'i')
		i += ft_putnbr(va_arg(args, int), 0);
	else if (*format == 'u')
		i += ft_putunsigned(va_arg(args, unsigned int), 0);
	else if (*format == 'x' || *format == 'X')
		i += ft_puthexa(va_arg(args, unsigned int), 0, *format);
	else if (*format == 'p')
		i += ft_putptr(va_arg(args, unsigned long), 0);
	else if (*format == '%')
	{
		if (write(1, "%", 1) == -1)
			return (-1);
		return (1);
	}
	else
		return (-1);
	return (i);
}
