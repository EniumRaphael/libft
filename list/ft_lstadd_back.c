/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:39:56 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/01 16:35:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

/**
 * @brief Add the list new to the back of chained list of lst
 *
 * @param lst first element of the list
 * @param new The element to add at the end
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tempo;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tempo = *lst;
	while (tempo->next != NULL)
		tempo = tempo->next;
	tempo->next = new;
}
