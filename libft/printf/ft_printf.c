/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:21:54 by efembock          #+#    #+#             */
/*   Updated: 2024/10/22 14:38:25 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	handle_format(const char **format, va_list args)
{
	int	result;

	result = ft_format(++(*format), args);
	if (result == -1)
		return (-1);
	return (result);
}

int	ft_printf(const char *format, ...)
{
	int		counter;
	int		result;
	va_list	args;

	if (!format)
		return (-1);
	counter = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			result = handle_format(&format, args);
			if (result == -1)
				return (-1);
			counter += result;
		}
		else if (write(1, format, 1) == -1)
			return (-1);
		else
			counter++;
		format++;
	}
	va_end(args);
	return (counter);
}
/*
#include <stdio.h>
#include "libft/libft.h"

int	main()
{
	int	c;
	int	i;
	int	j;
	char	*str;
	char	*str2;

	printf("#####TEST:1#####\n");
	printf("     -char-\n");
	i = ft_printf("%%%cty%cwo%c%c", '4', 'T', '!', '%');
	printf("\n");
	j = printf("%%%cty%cwo%c%c", '4', 'T', '!', '%');
	printf("\n");
	ft_printf("custom(i) = %i\n", i);
	printf("printf(j) = %i\n", j);
	c = 'A';
	printf("%i\n", c);
	c = ft_tolower(c);
	printf("%i\n", c);

	printf("#####TEST:2#####\n");
	printf("    -string-\n");
	str = "TEST";
	i = ft_printf("%s", str);
	printf("\n");
	j = printf("%s", str);
	printf("\n");
	ft_printf("custom(i) = %i\n", i);
	printf("printf(j) = %i\n", j);
	str2 = "T%ST M3% PL3453!%";
	i = ft_printf("%s", str2);
	printf("\n");
	j = printf("%s", str2);
	printf("\n");
	ft_printf("custom(i) = %i\n", i);
	printf("printf(j) = %i\n", j);
	
	printf("#####TEST:3#####\n");
	printf("      -int-\n");
	i = ft_printf("%i", -2147483647);
	printf("\n");
	j = printf("%i", -2147483647);
	printf("\n");
	ft_printf("custom(i) = %i\n", i);
	printf("printf(j) = %i\n", j);
	i = ft_printf("%i", 2147483647);
	printf("\n");
	j = printf("%i", 2147483647);
	printf("\n");
	ft_printf("custom(i) = %i\n", i);
	printf("printf(j) = %i\n", j);

	printf("#####TEST:4#####\n");
	printf("   -unsigned-\n");
	i = ft_printf("%u", 4294967295);
	printf("\n");
	j = printf("%u", (unsigned int)4294967295);
	printf("\n");
	ft_printf("custom(i) = %u\n", i);
	printf("printf(j) = %u\n", j);

	printf("#####TEST:5#####\n");
	printf("     -hexa-\n");
	i = ft_printf("%x", 42);
	printf("\n");
	j = printf("%x", 42);
	printf("\n");
	ft_printf("custom(i) = %u\n", i);
	printf("printf(j) = %u\n", j);
	i = ft_printf("%x", 4242);
	printf("\n");
	j = printf("%x", 4242);
	printf("\n");
	ft_printf("custom(i) = %u\n", i);
	printf("printf(j) = %u\n", j);

	printf("#####TEST:6#####\n");
	printf("   -pointer-   \n");
	str = NULL;
	i = ft_printf("%p", str);
	printf("\n");
	str = NULL;
	j = printf("%p", str);
	printf("\n");
	ft_printf("custom(i) = %u\n", i);
	printf("printf(j) = %u\n", j);
	str = ".fourtyTWO";
	i = ft_printf("%p", str);
	printf("\n");
	j = printf("%p", str);
	printf("\n");
	ft_printf("custom(i) = %u\n", i);
	printf("printf(j) = %u\n", j);
	return (0);
}*/
