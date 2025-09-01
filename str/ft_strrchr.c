/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:58:22 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/01 17:49:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <unistd.h>

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * @param s The string to search.
 * @param c The character to locate.
 * 
 * @return A pointer to the matched character,
 * or NULL if it does not appear in `s`.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c % 256)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == c % 256)
		return ((char *)s + i);
	return (NULL);
}
