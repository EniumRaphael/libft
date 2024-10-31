/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:04:26 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/31 12:49:55 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Check if the character is in the ascii table
 *
 * @param c the character
 * @return the character if in the ascii table or 0 if not
 */
int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c > 0 && c <= 127)
		return (c);
	return (0);
}
