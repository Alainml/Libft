/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:29:08 by almirand          #+#    #+#             */
/*   Updated: 2022/03/31 10:15:37 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Transforms an uppecase char into lower
 *
 * @param {c} char to transform
 *
 * @return {c} Char transformed
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
