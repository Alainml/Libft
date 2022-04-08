/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:26:19 by almirand          #+#    #+#             */
/*   Updated: 2022/04/04 10:43:26 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Finds the last coincidence of given char in string and returns its address
 *
 * @param {s} String to search at
 * @param {c} Char to find in s
 *
 * @return {s2} String s from last c coincidence address
 */
char	*ft_strrchr(const char *s, int c)
{
	char			*s2;
	unsigned int	length;
	unsigned char	ch;

	ch = (unsigned char)c;
	s2 = (char *) s;
	length = ft_strlen(s2);
	while (length)
	{
		if (s2[length] == ch)
			return (&s2[length]);
		length--;
	}
	if (s2[length] == ch)
		return (&s2[length]);
	return (0);
}

/*int main(void)
{
	 const char  s[20] = "hol-o-a";
	 char c = '-';
	 printf("%s - ", ft_strrchr(s, c));
	 printf("%s", strrchr(s, c));
}*/
