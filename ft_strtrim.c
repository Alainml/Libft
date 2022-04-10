/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:40:37 by almirand          #+#    #+#             */
/*   Updated: 2022/04/10 16:50:51 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <stdio.h> */

/*
 * Counts how many chars from set are at start from trim
 *
 * @param {set} String with the chars to delete
 * @param {trim} Original string to trimmer from
 *
 * @return {start} Number of positions to ignore from start
 */
static size_t	trimstart(char const *set, char const	*trim)
{
	size_t	start;
	int		found;

	start = 0;
	found = 0;
	while (trim[start] && found == 0)
	{
		if (ft_strchr(set, trim[start]) == 0)
			return (start);
		start++;
	}
	return (start);
}

/*
 * Counts how many chars from set are at end from trim
 *
 * @param {set} String with the chars to delete
 * @param {trim} Original string to trimmer from
 *
 * @return {end} Number of positions to ignore from end
 */
static size_t	trimend(char const *set, char const	*trim)
{
	size_t	length;
	size_t	end;
	int		found;

	length = ft_strlen(trim);
	end = 0;
	found = 0;
	while (end < length)
	{
		if (ft_strchr(set, trim[length - end - 1]) == 0)
			return (end);
		end++;
	}
	return (end);
}

/*
 * Deletes all characters from string 'set' in s1 until
 * a char not included in 'set' is found.
 *
 * @param {s1} String to search in
 * @param {set} String with the char to delete in s1
 *
 * @return {trim} Trimmed string 's1' according to 'set' chars.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	length;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	length = ft_strlen(s1);
	start = trimstart(set, s1);
	end = length - trimend(set, s1);
	if (start < end)
		return (ft_substr(s1, start, end - start));
	s = malloc(1);
	s[0] = '\0';
	return (s);
}
