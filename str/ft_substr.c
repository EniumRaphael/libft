/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:54:42 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:10:59 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extracts a substring from a string.
 * 
 * @param s The source string.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 * 
 * @return A pointer to the substring, or NULL if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > (ft_strlen(s)))
		len = ft_strlen(s) - start;
	str = (char *)malloc(len + 1);
	if (!str || !s)
		return (free(str), ft_strdup(""));
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
