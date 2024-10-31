/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:40:37 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 17:32:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Clear the all list with the function
 *
 * @param lst the start of the chained list
 * @param del the function to clear the list
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tempo;

	while (*lst)
	{
		tempo = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tempo;
	}
}
