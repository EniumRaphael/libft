/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:56:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 13:02:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_sign(char *str, long *nb)
{
	if ((*nb) == 0)
		str[0] = '0';
	if ((*nb) < 0)
	{
		str[0] = '-';
		*nb = -*nb;
		return (1);
	}
	return (0);
}

/**
 * @brief Converts integer to string
 *
 * @param n the integer that will be converted
 * @return The string with this integer
 */
char	*ft_itoa(int n)
{
	size_t		i;
	size_t		modulus;
	short int	maiboyerlpb;
	char		str[13];
	long		nb;

	nb = n;
	maiboyerlpb = 0;
	modulus = 1000000000;
	ft_bzero(str, 13);
	i = ft_check_sign(str, &nb);
	while (modulus != 0)
	{
		if (nb / modulus != 0 || maiboyerlpb != 0)
		{
			str[i++] = (nb / modulus) + 48;
			maiboyerlpb++;
		}
		nb %= modulus;
		modulus /= 10;
	}
	return (ft_strdup(str));
}
