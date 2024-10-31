/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:43:13 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 17:54:25 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Sets a block of memory to zero
 *
 * @param s Pointer to the memory area to be set at zero
 * @param n Number of bytes to set to zero
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
