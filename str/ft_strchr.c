/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:32:19 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/01 17:49:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"
#include <unistd.h>

/**
 * @brief Locates the first occurrence of a character in a string.
 * 
 * @param s The string to search.
 * @param c The character to locate.
 * 
 * @return A pointer to the matched character,
 * or NULL if it does not appear in `s`.
 */
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	if (c == 0)
		return ((char *)s + ft_strlen(s));
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
