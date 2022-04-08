/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:43:45 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 10:23:19 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compares two strings that are both n bytes long
 *
 * @param {s1}	First string to compare
 * @param {s2}	Second string to compare
 * @param {n}	Length of both strings
 *
 * @return {int} Positive if s1 > s2, negative if s1 < s2
 * 				 0 if equal.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *) s1;
	aux_s2 = (unsigned char *) s2;
	index = 0;
	while (index < n)
	{
		if (aux_s1[index] != aux_s2[index])
			return (aux_s1[index] - aux_s2[index]);
		index++;
	}
	return (0);
}

/*
int main(void)
{
	const char	*s1 = "hola";
	const char	*s2 = "hola";
	size_t		n = 4;
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d", memcmp(s1, s2, n));
}*/
