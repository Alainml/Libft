/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:37:51 by almirand          #+#    #+#             */
/*   Updated: 2022/03/29 16:57:51 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns 1 if a char is printable, 0 if not
 *
 * @param {c} char to process
 * @return {i} boolean 1 if printable, 0 if not
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
