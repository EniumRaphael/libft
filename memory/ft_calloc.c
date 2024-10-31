/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:47:17 by rparodi           #+#    #+#             */
/*   Updated: 2023/11/13 14:47:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*to_return;

	if (nmemb == 0 || size == 0)
		return ((void *)malloc(1));
	total = nmemb * size;
	if (total / nmemb != size && total / size != nmemb)
		return (NULL);
	to_return = (char *)malloc(total);
	if (to_return == NULL)
		to_return = NULL;
	else
		ft_bzero(to_return, total);
	return (to_return);
}
