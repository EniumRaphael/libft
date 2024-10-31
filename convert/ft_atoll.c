/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:12:07 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 15:14:50 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_space(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	ft_check_sign(const char *nptr, size_t *i)
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
 * @brief Converts string to long long integer
 *
 * @param nptr the string that will be converted
 * @return The long long int on the string
 */
long long int	ft_atoll(const char *nptr)
{
	size_t			i;
	int				sign;
	long long int	number;

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
