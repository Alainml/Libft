/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:37:37 by almirand          #+#    #+#             */
/*   Updated: 2022/04/01 10:40:06 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Copies src in dst with a new size of dst (dstsize)
 *
 * @param {dst} Destination array to copy at
 * @param {src} Source array to copy from
 * @param {dstsize} new size of dst, last spot is for \0
 *
 * @return {i} size of src
 *
 * zsh: Illegal hardware instruction
 *      Negative number
 *      n longer than array's length
*/
size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = ft_strlen(src);
	return (i);
}

/*int main(void)
{
	char	dst[10] = "desti";
	char	dst2[10] = "desti";
	const char	src[10] = "source";
	const char	src2[10] = "source";
	printf("%lu ",strlcpy(dst, src, 4));
	printf("%s\n", dst);
	printf("%zu ", ft_strlcpy(dst2, src2, 4));
	printf("%s", dst2);
}*/
