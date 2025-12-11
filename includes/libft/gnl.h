/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:12:04 by rparodi           #+#    #+#             */
/*   Updated: 2025/12/11 15:24:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 420
# endif

# include <stdlib.h>
# include <unistd.h>

char	**memory_storage(void);
char	*ft_get_line(char *str);
char	*get_next_line(int fd);
void	get_next_line_clear(void);
char	*ft_get_next(char *str);
char	*ft_get_line(char *str);
char	*ft_strjoin_gnl(char *s1, char *s2, int i, int j);
int		ft_strchr_index(char *str, char c);
char	*file_converted(int fd);
char	*ft_free(char *str);
char	*ft_check(char *memory, int fd);

#endif
