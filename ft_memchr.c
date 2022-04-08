/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:08:47 by almirand          #+#    #+#             */
/*   Updated: 2022/04/08 13:17:57 by almirand         ###   ########.fr       */
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

/* int main(void)
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char c = 't';
	printf("%s - ", ft_memchr(s, c + 256, 7));
	printf("%s", memchr(s, c + 256, 7));
} */
