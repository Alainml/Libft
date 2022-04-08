/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:04:07 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 12:51:33 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Compares two strings, stoping at n char.
 *
 * @param {s1}	First string
 * @param {s2}	Second string
 * @param {n}	Number of char to compare
 *
 * @return {value} positive if s1 is greater than s2,
 * 				  negative if lower and 0 if equal.
 */

int	ft_strncmp(const char	*s1, const char	*s2, size_t n)
{
	size_t			i;
	unsigned char	*aux_s1;
	unsigned char	*aux_s2;

	aux_s1 = (unsigned char *)s1;
	aux_s2 = (unsigned char *)s2;
	i = 0;
	while ((aux_s1[i] || aux_s2[i]) && i < n)
	{
		if (aux_s1[i] != aux_s2[i])
			return (aux_s1[i] - aux_s2[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[10] = "pr6ueba";
	char	str2[10] = "pr2ueba";
	int		n = 10;

	printf("%d", ft_strncmp(str1, str2, n));
} */
