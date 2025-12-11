/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:14:25 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/17 16:44:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

# include <stdint.h>

/**
 * @brief Perform a power calculation
 *
 * @param base The element to calculate the power
 * @param exponent The power to calculate
 * @return The result of the operation
 */
uint64_t	ft_power(uint64_t base, uint64_t exponent);

/**
 * @brief Select the maximum of the two parameters
 *
 * @param x First element
 * @param y Second element
 * @return The maximum of the two parameters
 */
uint32_t	ft_min(uint32_t x, uint32_t y);

/**
 * @brief Select the minimum of the two parameters
 *
 * @param x First element
 * @param y Second element
 * @return The minimum of the two parameters
 */
uint32_t	ft_min(uint32_t x, uint32_t y);

/**
 * @brief Perform a Root sqare calculation
 *
 * @param number The element to calculate
 * @return The square root of the parameters
 */
uint64_t	ft_sqrt(uint64_t number);

#endif
