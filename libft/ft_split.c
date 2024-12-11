/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efembock <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:12:30 by efembock          #+#    #+#             */
/*   Updated: 2024/09/18 22:30:00 by efembock         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

static char	*trim_word(const char **s, char c)
{
	char		*word;
	size_t		len;
	const char	*start;
	const char	*end;

	start = *s;
	end = *s;
	while (*end && *end != c)
		end++;
	len = end - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	*s = end;
	return (word);
}

static char	**free_all(char **s, size_t counter)
{
	while (counter--)
		free(s[counter]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	i;

	if (!s)
		return (NULL);
	strings = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strings)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			strings[i] = trim_word(&s, c);
			if (!strings[i])
				return (free_all(strings, i));
			i++;
		}
	}
	strings[i] = NULL;
	return (strings);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "   Don't panic! This is 42-code. Also AI helped!";
	char	**strings;
	int	i;

	strings = ft_split(str, ' ');
	if (!strings)
		return (1);
	i = 0;
	while(strings[i])
	{
		puts(strings[i]);
		free(strings[i]);
		i++;
	}
	printf("%zu seperate words detected.\n", count_words(str, ' '));
	free(strings);
	return (0);
}
*/
