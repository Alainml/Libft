/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:32:20 by almirand          #+#    #+#             */
/*   Updated: 2022/04/04 10:42:38 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Finds the first coincidence of given char in string and returns its address
 *
 * @param {s} String to search at
 * @param {c} Char to find in s
 *
 * @return {s2} String s from first c coincidence address, NULL if not found
 */
char	*ft_strchr(const char *s, int c)
{
	char			*s2;
	unsigned int	index;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	index = 0;
	while (s2[index])
	{
		if (s2[index] == ch)
			return (&s2[index]);
		index++;
	}
	if (s2[index] == ch)
		return (&s2[index]);
	return (NULL);
}

/* int	main(void)
{
	const char	s[20] = "hola";
	char c = 'p';
	printf("%s - ", ft_strchr(s, c + 256));
	printf("%s", strchr(s, c + 256));
} */
