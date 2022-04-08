/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:14:49 by almirand          #+#    #+#             */
/*   Updated: 2022/03/29 16:57:48 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns 1 if char is ascii, 0 if not
 *
 * @param {c} char to process
 * @return {i} boolean 1 if ascii, 0 if not
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
