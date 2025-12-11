/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:00:12 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:24:23 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/**
 * @brief Give the size of the chained list
 *
 * @param lst the chained list
 * @return the size of the list
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief Found the last element of the chained list
 *
 * @param lst the chained list
 * @return the last element of the chained list
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief Create an other list from an old one with a function on all element
 *
 * @param lst the chained list
 * @param f the function to function to iterate
 * @param del The function to delete the old list
 * @return The list edited by the function given by f
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * @brief Allocate a new list with the first element
 *
 * @param content the element to give on first element
 * @return the new list
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief Add the list new to the back of chained list of lst
 *
 * @param lst first element of the list
 * @param new The element to add at the end
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Add the list new to the front of chained list of lst
 *
 * @param lst first element of the list
 * @param new The element to add at the start
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Clear the all list with the function
 *
 * @param lst the start of the chained list
 * @param del the function to clear the list
 */
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Clear the element of the list with the function
 *
 * @param lst the element of the list to be clear
 * @param del the function to clear the list
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Apply the fstunction given in arguments at all the element of the list
 *
 * @param lst the chained list
 * @param f the pointer to function
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
