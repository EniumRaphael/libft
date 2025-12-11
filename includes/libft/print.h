/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:07:30 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:23:42 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

/**
 * @brief Print on a file descriptor
 *
 * @param fd the file descriptor
 * @param s the string
 * @return the number of character printable
 */
int		ft_dprintf(int fd, const char *s, ...);

/**
 * @brief Print on the standard output
 *
 * @param s the string
 * @return the number of character printable
 */
int		ft_printf(const char *s, ...);

/**
 * @brief print an character on a file descriptor
 *
 * @param c the character to print
 * @param fd the file descriptor
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief Print a string follow by a new line on a file descriptor
 *
 * @param s the string to print
 * @param fd the file descriptor
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief Print a number on a file descriptor
 *
 * @param n the number to print
 * @param fd the file descriptor
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief print a string on a file descriptor
 *
 * @param s the string to print
 * @param fd the file descriptor
 */
void	ft_putstr_fd(char *s, int fd);

#endif
