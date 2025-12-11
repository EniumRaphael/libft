/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:14:47 by rparodi           #+#    #+#             */
/*   Updated: 2025/11/26 17:13:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2, int i, int j)
{
	char	*temp;

	if (!s1)
	{
		s1 = (char *)malloc(1);
		s1[i] = '\0';
	}
	if (!s2 || !s1)
		return (NULL);
	temp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (NULL);
	while (s1[i])
	{
		temp[i] = s1[i];
		i++;
	}
	while (s2[++j])
		temp[i + j] = s2[j];
	temp[i + j] = '\0';
	free(s1);
	return (temp);
}

char	*ft_get_line(char *str)
{
	char	*temp;
	int		i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	temp = (char *)malloc((i + 2));
	if (!temp)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		temp[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	*ft_get_next(char *str)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
		return (ft_free(str));
	temp = (char *)malloc((ft_strlen(str) - i));
	if (!temp)
		return (NULL);
	j = i + 1;
	while (str[++i])
		temp[i - j] = str[i];
	temp[i - j] = '\0';
	free(str);
	return (temp);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (i);
			i++;
		}
	}
	return (-1);
}
