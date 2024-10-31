/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:57:44 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:12:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring within a string, up to a specified length.
 * 
 * The `ft_strnstr` function locates the first occurrence of the null-terminated
 * string `needle` within the string `haystack`,
 * searching only up to `len` characters.
 * 
 * @param big The string to search.
 * @param little The substring to locate.
 * @param len The maximum number of characters to search.
 * 
 * @return A pointer to the beginning of the located substring,
 * or NULL if `needle` is not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 && (!big || !little))
		return (NULL);
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && little[j] == big[i + j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
