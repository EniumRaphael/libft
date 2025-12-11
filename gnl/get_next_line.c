/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:12:02 by rparodi           #+#    #+#             */
/*   Updated: 2025/11/28 00:40:27 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"
#include "str.h"

char	*ft_check(char *memory, int fd)
{
	char	*buffer;
	int		bytescopy;

	bytescopy = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (ft_strchr_index(memory, '\n') <= 0 && bytescopy)
	{
		bytescopy = read(fd, buffer, BUFFER_SIZE);
		if (bytescopy == -1)
			return (ft_free(buffer));
		buffer[bytescopy] = '\0';
		memory = ft_strjoin_gnl(memory, buffer, 0, -1);
	}
	free(buffer);
	return (memory);
}

char	*file_converted(int fd)
{
	size_t	i;
	int		read_bits;
	char	*str;
	char	c;

	i = 0;
	c = 1;
	read_bits = 1;
	str = (char *)malloc(sizeof(char) * BUFFER_SIZE);
	if (!str)
		return (NULL);
	while (read_bits != 0 && i < BUFFER_SIZE)
	{
		read_bits = read(fd, &c, 1);
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_free(char *str)
{
	free(str);
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	**memory;
	char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	memory = memory_storage();
	*memory = ft_check(*memory, fd);
	if (!*memory)
		return (NULL);
	line = ft_get_line(*memory);
	*memory = ft_get_next(*memory);
	return (line);
}
