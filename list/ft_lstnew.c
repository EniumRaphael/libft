/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:44:02 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 17:52:24 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocate a new list with the first element
 *
 * @param content the element to give on first element
 * @return the new list
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*to_return;

	to_return = NULL;
	to_return = (t_list *)malloc(sizeof(t_list));
	if (!to_return)
		return (NULL);
	to_return->content = content;
	to_return->next = NULL;
	return (to_return);
}
