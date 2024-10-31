/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:56:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 18:13:39 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		if (str[i] != sep && str[i])
		{
			while (str[i] != sep && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

static char	*ft_strndup(const char *s, int j)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc((j + 1));
	if (!str)
		return (NULL);
	while (s[i] && i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ext_w(char **words_array, const char *str, char sep, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (str[i] == sep && str[i])
			i++;
		str = str + i;
		i = 0;
		while (str[i] != sep && str[i])
			i++;
		words_array[j++] = ft_strndup(str, i);
		str = str + i;
		i = 0;
	}
	words_array[j] = 0;
	return (words_array);
}

/**
 * @brief Splits a string into an array of substrings based on a delimiter.
 * 
 * @param s The string to split.
 * @param c The delimiter character.
 * 
 * @return A NULL-terminated array of substrings,
 * or NULL if memory allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	int		size;
	char	**words_array;

	size = count_words(s, c);
	words_array = (char **)malloc(sizeof(char *) * (size + 1));
	if (!words_array)
		return (NULL);
	if (size == 0)
	{
		words_array[0] = NULL;
		return (words_array);
	}
	words_array = ext_w(words_array, s, c, size);
	return (words_array);
}
