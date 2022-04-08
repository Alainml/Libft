/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:19:44 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 10:15:41 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Transforms a lowercase char into upper
 *
 * @param {c} char to transform
 *
 * @return {c} Char transformed
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
