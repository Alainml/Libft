/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almirand <almirand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 12:58:31 by almirand          #+#    #+#             */
/*   Updated: 2022/04/08 15:25:06 by almirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Converts the initial portion of the string str to int
 *
 * @param {str} String to convert
 *
 * @return {int} Int representation of str
 */
int	ft_atoi(const char *str)
{
	int	num;
	int	index;
	int	minus;

	num = 0;
	index = 0;
	minus = 1;
	while (str[index] == ' ' || str[index] == '\f' || str[index] == '\n'
		|| str[index] == '\r' || str[index] == '\t' || str[index] == '\v')
		index++;
	if (str[index] == '-')
	{
		minus = -minus;
		index++;
	}
	else if (str[index] == '+')
		index++;
	while (str[index] >= '0' && str[index] <= '9')
	{
		num = (num * 10) + (str[index] - '0');
		index++;
	}
	return (num * minus);
}

/* int	main(void)
{
	const char	str[15] = "-2147483648";
	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
} */
