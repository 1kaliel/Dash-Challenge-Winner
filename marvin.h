/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   marvin.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: .frnki   <frnki@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:20:42 by .frnki            #+#    #+#             */
/*   Updated: 2024/12/07 13:45:30 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MARVIN_H
# define MARVIN_H
// std header
#include <fcntl.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// custom header
# include "libft/get_next_line/get_next_line.h"
# include "libft/printf/ft_printf.h"
# include "libft/libft.h"

// typedef & structs
typedef struct	s_marvin
{
	int		start;
	int		goal;
	int		columns;
	int		rows;
	char	*string;
}	t_marvin;

typedef struct	s_pqitem
{
	int	idx;
	int	dist;
}	t_pqitem;

// prototypes
#endif
