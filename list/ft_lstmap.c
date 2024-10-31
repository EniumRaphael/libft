/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:43:28 by rparodi           #+#    #+#             */
/*   Updated: 2023/11/12 19:28:02 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
