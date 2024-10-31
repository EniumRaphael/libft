/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:49:04 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 17:59:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two memory blocks
 * 
 * @param s1 Pointer to the first memory area
 * @param s2 Pointer to the second memory area
 * @param n Number of bytes to compare
 * 
 * @return An integer indicating the relationship between the two memory areas:
 *         - `< 0` if `s1` is less than `s2`
 *         - `0` if `s1` equals `s2`
 *         - `> 0` if `s1` is greater than `s2`
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
