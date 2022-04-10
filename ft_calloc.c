/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:33:10 by almirand          #+#    #+#             */
/*   Updated: 2022/04/10 17:48:35 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates enough space for count objects that are size bytes of memory each
 * Its filled with 0s.
 *
 * @param {count}	Num of objects
 * @param {size}	Size of each object in bytes
 *
 * @return {void *}	Address allocated with malloc, full of 0s.
 */

void	*ft_calloc(size_t count, size_t size)
{
	void			*str;
	size_t			length;

	str = (void *)malloc (length);
	if (!str)
		return (NULL);
	ft_bzero(str, length);
	return (str);
}
