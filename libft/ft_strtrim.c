/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:32:03 by efembock          #+#    #+#             */
/*   Updated: 2024/09/20 15:00:32 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	trim_start;
	size_t	trim_end;

	if (!s1 || !set)
		return (NULL);
	trim_start = 0;
	trim_end = ft_strlen(s1);
	while (s1[trim_start] && ft_strchr(set, s1[trim_start]))
		trim_start++;
	while (trim_end > trim_start && ft_strchr(set, s1[trim_end - 1]))
		trim_end--;
	trim = (char *)malloc((trim_end - trim_start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + trim_start, trim_end - trim_start + 1);
	return (trim);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	*s1;
	char const	*set;
	char		*trim;

	s1 = "ccbbaa Test me, alright? Test.bbTccaa";
	set = "abc";
	trim = ft_strtrim(s1, set);
	puts(trim);
	free(trim);
	return (0);
}*/
