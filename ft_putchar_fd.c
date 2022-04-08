/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:44:12 by almirand          #+#    #+#             */
/*   Updated: 2022/04/08 15:18:33 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Writes a char in a file
 *
 * @param {c} Char to copy
 * @param {fd} File to copy at
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
