/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:11:16 by almirand          #+#    #+#             */
/*   Updated: 2022/04/10 16:50:43 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Locates the first ocurrence of a null terminated str1 in str2,
 * no more than n searched
 *
 * @param {haystack} String to search at
 * @param {needle} String to look for
 * @param {n} Number of chars to search, then stop.
 *
 * @return {address} Address of the first ocurrence.
 */
char	*ft_strnstr(const char	*haystack, const char	*needle, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < n)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
