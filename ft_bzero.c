/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:51:41 by almirand          #+#    #+#             */
/*   Updated: 2022/04/10 17:48:49 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 *	Writes n zeroed bytes to the string given. if n is 0 does nothing.
 *
 * @param {s} String to modificate
 * @param {n} Number of chars to modificate
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
