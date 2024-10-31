/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:13:14 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 16:16:45 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	_print_char(int fd, char c, int *ret_value);
void	_print_nbr(int fd, int nb, int *ret_value);
void	_print_base(\
		int fd, unsigned long long nbr, int *ret_value, char c);
void	_print_unsigned(int fd, unsigned int nb, int *ret_value);
void	_print_str(int fd, char *str, int *ret_value);

void	_print_char(int fd, char c, int *ret_value)
{
	write(fd, &c, 1);
	(*ret_value)++;
}

void	_print_nbr(int fd, int nb, int *ret_value)
{
	if (nb < 0)
	{
		if (nb == INT_MIN)
		{
			write(1, "-2147483648", 11);
			*ret_value += 11;
			return ;
		}
		nb = -nb;
		_print_char(fd, '-', ret_value);
	}
	if (nb >= 10)
	{
		_print_nbr(fd, nb / 10, ret_value);
		nb = nb % 10;
	}
	if (nb < 10)
		_print_char(fd, nb + 48, ret_value);
}

void	_print_base(\
		int fd, unsigned long long nbr, int *ret_value, char c)
{
	char	base[16];

	if (c == 'x' || c == 'q')
		ft_strcpy(base, "0123456789abcdef");
	else if (c == 'X')
		ft_strcpy(base, "0123456789ABCDEF");
	else if (c == 'p')
	{
		if (nbr != 0)
			_print_str(fd, "0x", ret_value);
		else if (nbr == 0)
		{
			_print_str(fd, "(nil)", ret_value);
			return ;
		}
		else
			ft_strcpy(base, "0123456789abcdef");
		c++;
	}
	if (c != 'p')
	{
		if (nbr >= 16)
			_print_base(fd, nbr / 16, ret_value, c);
		_print_char(fd, base[nbr % 16], ret_value);
	}
}

void	_print_unsigned(int fd, unsigned int nb, int *ret_value)
{
	if (nb >= 10)
	{
		_print_unsigned(fd, nb / 10, ret_value);
		nb = nb % 10;
	}
	if (nb < 10)
		_print_char(fd, nb + 48, ret_value);
}

void	_print_str(int fd, char *str, int *ret_value)
{
	if (!str)
		*ret_value += write(fd, "(null)", 6);
	else
		*ret_value += write(fd, str, ft_strlen(str));
}
