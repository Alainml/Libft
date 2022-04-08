/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 13:22:00 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 10:23:36 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies the character c (unsigned char) to the n characters of the string b
 *
 * @param {str} String to copy at
 * @param {c} Character to copy at string b
 * @param {n} Number of elements to edit from start of str
 * @return {str} str after modifications
 */
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	c2;
	unsigned char	*aux;

	c2 = (unsigned char) c;
	aux = str;
	while (n--)
		*aux++ = c2;
	return (str);
}
