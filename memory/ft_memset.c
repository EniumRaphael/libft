/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:50:29 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/01 16:42:01 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Fills a block of memory with a specified byte
 * 
 * @param s Pointer to the memory area to fill
 * @param c Byte value to be set in the memory
 * @param n Number of bytes to be set to the value c
 * 
 * @return A pointer to the memory area s
 */
void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
