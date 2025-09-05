/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:39:56 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:14:04 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

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
