/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:54:23 by almirand          #+#    #+#             */
/*   Updated: 2022/03/29 16:57:45 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Returns 1 if char is numeric or alpha, 0 if not
 *
 * @param {c} char to process
 * @return {i} boolean 1 if numeric or alpha, 0 if not
 */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		return (1);
	return (0);
}
