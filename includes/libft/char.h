/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:54:04 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:06:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
# define CHAR_H

/**
 * @brief Check if the character is alpha-numeric
 *
 * @param c the character
 * @return 1 if the char is alpha-numeric overwise 0
 */
int	ft_isalnum(int c);

/**
 * @brief Check if the character is alpha
 *
 * @param c the character
 * @return 1 if the char is alphabetic overwise 0
 */
int	ft_isalpha(int c);

/**
 * @brief Check if the character is in the ascii table
 *
 * @param c the character
 * @return 1 if the char is ascii overwise 0
 */
int	ft_isascii(int c);

/**
 * @brief Check if the character is numeric
 *
 * @param c the character
 * @return 1 if the char is numeric overwise 0
 */
int	ft_isdigit(int c);

/**
 * @brief Check if the character is printable
 *
 * @param c the character
 * @return 1 if the char is printable 0
 */
int	ft_isprint(int c);

/**
 * @brief Check if the character is whitespace
 *
 * @param c the character
 * @return 1 if the char is whitespace otherwise 0
 */
int	ft_isspace(int c);

/**
 * @brief convert the upper case to lower case
 *
 * @param c the character
 * @return the character to lower case if is on upper
 */
int	ft_tolower(int c);

/**
 * @brief convert the lower case to upper case
 *
 * @param c the character
 * @return the character to upper case if is on lower
 */
int	ft_toupper(int c);

#endif
