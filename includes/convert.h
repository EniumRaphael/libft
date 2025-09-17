/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:57:24 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/17 16:40:58 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <stddef.h>

/**
 * @brief Converts integer to string
 *
 * @param n the integer that will be converted
 * @return The string with this integer
 */
char			*ft_itoa(int n);

/**
 * @brief Converts string to integer
 *
 * @param nptr the string that will be converted
 * @return The integer on the string
 */
int				ft_atoi(const char *nptr);

/**
 * @brief Converts string to size_t
 *
 * @param nptr the string that will be converted
 * @return The unsigned long long on the string
 */
size_t			ft_atou(const char *nptr);

/**
 * @brief Converts string to long long integer
 *
 * @param nptr the string that will be converted
 * @return The long long int on the string
 */
long long int	ft_atoll(const char *nptr);

#endif
