/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:39:34 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 21:01:21 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_intlength(int n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nbr;

	nbr = n;
	len = ft_intlength(nbr);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (len > 0 && nbr >= 0)
	{
		if (str[len - 1] == '-')
			break ;
		len--;
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	int		n;
	char	*itoa;

	n = 42;
	itoa = ft_itoa(n);
	if (itoa)
	{
		puts(itoa);
		free(itoa);
	}
	n = -2147483648;
	itoa = ft_itoa(n);
	if (itoa)
	{
		puts(itoa);
		free(itoa);
	}
	n = 0;
	itoa = ft_itoa(n);
	if (itoa)
	{
		puts(itoa);
		free(itoa);
	}
	n = -4242;
	itoa = ft_itoa(n);
	if (itoa)
	{
		puts(itoa);
		free(itoa);
	}
	n = 13371337;
	itoa = ft_itoa(n);
	if (itoa)
	{
		puts(itoa);
		free(itoa);
	}
	return (0);
}*/
