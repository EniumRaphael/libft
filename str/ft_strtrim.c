/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:55:44 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:09:25 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Trims specified characters from the start and end of a string.
 * 
 * @param s1 The string to trim.
 * @param set The set of characters to remove.
 * 
 * @return A pointer to the trimmed string, or NULL if memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s1)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i])
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	j = ft_strlen(s1);
	while (ft_strrchr(set, s1[j - 1]) != NULL && j > i)
		j--;
	str = (char *)malloc(j - i + 1);
	if (!str)
		return (NULL);
	k = 0;
	while (i < j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
