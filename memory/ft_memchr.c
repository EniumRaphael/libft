/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:48:30 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 17:59:07 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Scans memory for a byte
 * 
 * @param s Pointer to the memory area to scan
 * @param c Byte value to search for
 * @param n Number of bytes to scan in s
 * 
 * @return A pointer to the matching byte in memory, or NULL if the byte
is not found within the first n bytes
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((char)c == str[i])
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
