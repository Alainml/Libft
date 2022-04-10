/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:30:00 by almirand          #+#    #+#             */
/*   Updated: 2022/04/10 16:50:16 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Counts the number of words in the string
 *
 * @param {s} String to count at
 * @param {c} Limitator char
 *
 * @return {i} Number of words
 */
static int	ft_countwords(const char	*s, char c)
{
	int		n_words;
	int		i;

	i = 0;
	n_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			n_words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (n_words);
}

/*
 * Allocates and builds the bidimensional string
 *
 * @param {s} String to divide
 * @param {c} Char to use as delimitator
 *
 * @param {char **} Array with each substring
 */
char	**ft_build_split(const char *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		start;
	int		length;

	i = -1;
	j = 0;
	start = -1;
	length = ft_strlen(s);
	split = (char **) malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split || sizeof(split) == 0)
		return (NULL);
	while (++i <= length)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == length))
		{
			split[j++] = ft_substr(s, start, i - start);
			start = -1;
		}
	}
	split[j] = NULL;
	return (split);
}

/*
 * Makes substrings from the main string, dividing them by a char delimitator.
 *
 * @param {s} String to divide
 * @param {c} Char to use as delimitator
 *
 * @param {char **} Array with each substring
 */
char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_build_split(s, c));
}
