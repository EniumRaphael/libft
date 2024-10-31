/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:43:28 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 17:51:38 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Create an other list from an old one with a function on all element
 *
 * @param lst the chained list
 * @param f the function to function to iterate
 * @param del The function to delete the old list
 * @return 
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tempo;
	t_list	*tempo_content;

	tempo_content = ft_lstnew(f(lst->content));
	if (!tempo_content)
		return (NULL);
	tempo = tempo_content;
	lst = lst->next;
	while (lst)
	{
		tempo_content = ft_lstnew(f(lst->content));
		if (!tempo_content)
		{
			ft_lstclear(&tempo, del);
			return (NULL);
		}
		ft_lstadd_back(&tempo, tempo_content);
		lst = lst->next;
	}
	return (tempo);
}
