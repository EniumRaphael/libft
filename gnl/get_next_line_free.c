/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:40:01 by rparodi           #+#    #+#             */
/*   Updated: 2025/11/28 00:50:15 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

char	**memory_storage(void)
{
	static char	*memory;

	return (&memory);
}

void	get_next_line_clear(void)
{
	char	**memory;

	memory = memory_storage();
	ft_free(*memory);
	*memory = NULL;
}
