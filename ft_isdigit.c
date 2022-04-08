/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:47:03 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 11:15:03 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns 1 if digit, 0 if not
 *
 * @param {c} char to process
 * @return {i} boolean 1 if digit, 0 if not
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
