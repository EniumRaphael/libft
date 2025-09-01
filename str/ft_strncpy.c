/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:14:10 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/01 18:46:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Copies a string.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param size The size to copy
 * 
 * @return A pointer to `dst`.
 */
char	*ft_strcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] || i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
