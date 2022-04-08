/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:49:13 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 10:23:25 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies the first n char from src o dst
 *
 * @param {dst} Destination array to copy at
 * @param {src} Source array to copy from
 * @param {n} Number of chars to copy
 *
 * @return {dst} Pointer to dst
 *
 * zsh: Illegal hardware instruction
 * 		Negative number
 * 		n longer than array's length
 */
void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	void	*dst_aux;

	dst_aux = dst;
	if (dst || src)
	{
		while (n--)
			*((unsigned char *)dst++) = *((unsigned char *)src++);
		return (dst_aux);
	}
	return (NULL);
}

/*int main(void)
{
	char	dst[10] = "hola";
	char	src[10] = "adios";
	size_t	n = 6;
	printf("%s\n", ft_memcpy(dst, src, 20));
	printf("%s", memcpy(dst, src, 2));
}*/
