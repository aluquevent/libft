/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluque-v <aluque-v@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:19:59 by aluque-v          #+#    #+#             */
/*   Updated: 2025/01/18 17:20:04 by aluque-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_separator(char c, char ch)
{
	if (c == ch)
		return (1);
	return (0);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	is_word;

	if (!s)
		return (0);
	is_word = 1;
	count = 0;
	while (*s)
	{
		if (ft_is_separator(c, *s))
		{
			if (is_word == 1)
				count++;
			is_word = 0;
		}
		else 
			is_word = 1;
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(const char *matrix, size_t len)
{
	while (len--)
		free((void *)&matrix[len]);
	free((void *)matrix);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	words;
	size_t	sl;
	
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		sl = ft_numchar((const char *)s, c);
		matrix[i] = (char *)malloc(sizeof(char) * sl + 1);
		if (!matrix[i])
			return (ft_free_matrix((const char *)matrix, words));
		ft_strlcpy(matrix[i], s, sl + 1);
		s = ft_strchr(s, (int)c);
		i++;
	}
	matrix[i] = 0;
	return (matrix);
}
