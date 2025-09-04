/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:27:44 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 11:46:29 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void	_print_char(int fd, char c, int *ret);
void	_print_nbr(int fd, int nb, int *ret);
void	_print_base(\
		int fd, unsigned long long nbr, int *ret, char c);
void	_print_unsigned(int fd, unsigned int nb, int *ret);
void	_print_str(int fd, char *str, int *ret);

int	_check_args(int fd, char c, va_list args, int *ret)
{
	if (c == 'c')
		_print_char(fd, (char)va_arg(args, int), ret);
	else if (c == 's')
		_print_str(fd, (char *)va_arg(args, char *), ret);
	else if (c == 'i' || c == 'd')
		_print_nbr(fd, (int)va_arg(args, int), ret);
	else if (c == '%')
		_print_char(fd, '%', ret);
	else if (c == 'u')
		_print_unsigned(fd, (unsigned int)va_arg(args, unsigned int), ret);
	else if (c == 'x')
		_print_base(fd, (unsigned int)va_arg(args, unsigned int), ret, c);
	else if (c == 'X')
		_print_base(fd, (unsigned int)va_arg(args, unsigned int), ret, c);
	else if (c == 'p')
		_print_base(fd, (unsigned int)va_arg(args, unsigned int), ret, c);
	va_end(args);
	return (1);
}

/**
 * @brief Print on a file descriptor
 *
 * @param fd the file descriptor
 * @param s the string
 * @return the number of character printable
 */
int	ft_dprintf(int fd, const char *s, ...)
{
	size_t	i;
	va_list	args;
	char	*str;
	int		ret;

	ret = 0;
	str = ft_strdup(s);
	va_start(args, s);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			_check_args(fd, str[i + 1], args, &ret);
			i++;
		}
		else
			_print_char(fd, str[i], &ret);
		i++;
	}
	free(str);
	return (ret);
}

/**
 * @brief Print on the standard output
 *
 * @param s the string
 * @return the number of character printable
 */
int	ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	args;
	char	*str;
	int		ret;

	ret = 0;
	str = ft_strdup(s);
	va_start(args, s);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			_check_args(1, str[i + 1], args, &ret);
			i++;
		}
		else
			_print_char(1, str[i], &ret);
		i++;
	}
	free(str);
	return (ret);
}
