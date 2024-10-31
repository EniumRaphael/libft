/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:56:56 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:07:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares two strings lexicographically.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * 
 * @return An integer indicating the relationship between the two strings:
 *         - `< 0` if `s1` is less than `s2`.
 *         - `0` if `s1` equals `s2`.
 *         - `> 0` if `s1` is greater than `s2`.
 */
int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		diff;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
