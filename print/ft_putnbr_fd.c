/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:59:18 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:04:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_sign(int n, char *str, size_t *i, int fd)
{
	size_t		modulus;
	short int	maiboyerlpb;

	maiboyerlpb = 0;
	modulus = 1000000000;
	if (n < 0)
	{
		n = -n;
		str[(*i)] = '-';
		(*i)++;
	}
	while (modulus != 0)
	{
		if (n / modulus != 0 || maiboyerlpb != 0)
		{
			str[(*i)++] = (n / modulus) + 48;
			maiboyerlpb++;
		}
		n %= modulus;
		modulus /= 10;
	}
	ft_putstr_fd(str, fd);
	return (n);
}

/**
 * @brief Print a number on a file descriptor
 *
 * @param n the number to print
 * @param fd the file descriptor
 */
void	ft_putnbr_fd(int n, int fd)
{
	size_t		i;
	char		str[13];

	i = 0;
	ft_bzero(str, 13);
	if (n == 0)
		ft_putstr_fd("0", fd);
	else if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
		ft_check_sign(n, str, &i, fd);
}
