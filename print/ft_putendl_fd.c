/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:59:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/01 17:46:30 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

/**
 * @brief Print a string follow by a new line on a file descriptor
 *
 * @param s the string to print
 * @param fd the file descriptor
 */
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
