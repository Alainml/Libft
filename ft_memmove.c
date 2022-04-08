/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:58:23 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 13:57:05 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * As memcpy, copies len bytes from src to dst but treating overlap.
 *
 * @param {dst} String to copy at
 * @param {src} String to copy from
 * @param {len} length of string to copy
 *
 * @return {void *} Copied string in void *
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;
	size_t			i;

	aux_dst = (unsigned char *)dst;
	aux_src = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		aux_dst[len] = aux_src[len];
	return ((void *)aux_dst);
}
