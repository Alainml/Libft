/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:49:42 by almirand          #+#    #+#             */
/*   Updated: 2022/03/29 16:57:47 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns 1 if char is alpha, 0 if not
 *
 * @param {c} char to process
 * @return {i} boolean 1 if alpha, 0 if not
 */
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
