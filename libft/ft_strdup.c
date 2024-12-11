/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:38:30 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 23:25:17 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*duplicated;

	if (argc != 2)
	{
		printf("Is your mind on vacation? Give me ONE argument.\n");
		return (0);
	}
	duplicated = ft_strdup(argv[1]);
	if (duplicated == NULL)
	{
		printf("Memory allocation failed bro.\n");
		return (1);
	}
	printf("You have entered: %s\n", argv[1]);
	printf("Duplicated string is: %s\n", duplicated);
	free(duplicated);
	duplicated = NULL;
	return (0);
}*/
