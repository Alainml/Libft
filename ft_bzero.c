/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:51:41 by almirand          #+#    #+#             */
/*   Updated: 2022/04/08 13:17:36 by almirand         ###   ########.fr       */
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
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
		str[i++] = '\0';
}

/* int	main(void)
{
	char	str[20] = "";

	ft_bzero(str, 3);
} */
