/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 18:04:38 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 22:26:19 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	temp;
	long	nlong;

	nlong = n;
	if (nlong < 0)
	{
		write(fd, "-", 1);
		nlong = -nlong;
	}
	if (nlong > 9)
	{
		ft_putnbr_fd(nlong / 10, fd);
	}
	temp = (nlong % 10) + '0';
	write(fd, &temp, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(4242, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-42424242, 1);
	write(1, "\n", 1);
	return (0);
}*/
