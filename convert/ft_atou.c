/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atou.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:22:41 by rparodi           #+#    #+#             */
/*   Updated: 2025/11/03 14:12:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_check_space(int c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

size_t	ft_atou(const char *nptr)
{
	size_t	i;
	size_t	number;

	if (!nptr)
		return (0);
	i = 0;
	while (ft_check_space(nptr[i]))
		i++;
	number = 0;
	while (nptr[i])
	{
		if (nptr[i] >= '0' && nptr[i] <= '9')
			number = (number * 10) + nptr[i] - '0';
		else
			break ;
		i++;
	}
	return (number);
}
