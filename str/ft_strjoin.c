/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:55:15 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:13:21 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings into a new string.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * 
 * @return A pointer to the new concatenated string,
 * or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	save_i;
	char	*str;

	i = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	save_i = i;
	i = 0;
	while (s2[i] != '\0')
	{
		str[save_i + i] = s2[i];
		i++;
	}
	str[i + save_i] = '\0';
	return (str);
}
