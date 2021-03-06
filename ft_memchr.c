/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:08:47 by almirand          #+#    #+#             */
/*   Updated: 2022/04/10 16:49:55 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>
#include <string.h> */

/*
 * Locates the first ocurrence of c in string s
 *
 * @param {s}	String to search at
 * @param {c}	Char to find
 * @param {n}	Number of chars to find in
 *
 * @return {void *} Address at the first ocurrence
 */
void	*ft_memchr(const void	*s, int c, size_t n)
{
	size_t			index;
	unsigned char	*aux_s;
	unsigned char	ch;

	ch = (unsigned char)c;
	aux_s = (unsigned char *)s;
	index = 0;
	while (index < n)
	{
		if (aux_s[index] == ch)
			return ((void *)aux_s + index);
		index++;
	}
	return (NULL);
}
