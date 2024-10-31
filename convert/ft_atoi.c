/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:22:41 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 13:02:58 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_space(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_check_sign(const char *nptr, int *i)
{
	while (ft_check_space(nptr[*i]))
		(*i)++;
	if (nptr[*i] == '-')
	{
		(*i)++;
		return (-1);
	}
	else if (nptr[*i] == '+')
		(*i)++;
	return (1);
}

/**
 * @brief Converts string to integer
 *
 * @param nptr the string that will be converted
 * @return The integer on the string
 */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = ft_check_sign(nptr, &i);
	number = 0;
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			number = (number * 10) + nptr[i] - '0';
		else
			break ;
		i++;
	}
	return (sign * number);
}
