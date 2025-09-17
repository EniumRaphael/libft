/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:08:00 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/17 16:12:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>

uint64_t	ft_power(uint64_t base, uint64_t exponent)
{
	uint64_t	i;
	uint64_t	result;

	i = 0;
	result = 1;
	if (exponent == 0)
		return (1);
	while (i < exponent)
	{
		result *= base;
		i++;
	}
	return (result);
}
