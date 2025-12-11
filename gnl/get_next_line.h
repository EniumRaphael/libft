/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:12:04 by rparodi           #+#    #+#             */
/*   Updated: 2023/11/23 18:15:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 420
# endif

# include <unistd.h>
# include <stdlib.h>

char	*ft_get_line(char *str);
char	*get_next_line(int fd);
int		ft_strchr(char *str, char c);
char	*ft_get_next(char *str);
char	*ft_get_line(char	*str);
char	*ft_strjoin(char *s1, char *s2, int i, int j);
size_t	ft_strlen(char const *str);
char	*file_converted(int fd);
char	*ft_free(char *str);
char	*ft_check(char *memory, int fd);

#endif
