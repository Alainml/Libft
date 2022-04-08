/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:31:02 by almirand          #+#    #+#             */
/*   Updated: 2022/04/04 13:29:36 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Allocates sufficient momery for a copy of s1,
 * copies it and returns its pointer.
 *
 * @param {s1} String to copy
 *
 * @return {str} Copy of the string after memory being allocated
 */
char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	length;

	length = ft_strlen(s1) + 1;
	str = malloc (sizeof(char) * length);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, length);
	return (str);
}
