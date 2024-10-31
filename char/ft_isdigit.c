/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:28 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 12:49:05 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if the character is alpha numeric
 *
 * @param c the character
 * @return the character if numeric or 0 if not
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
