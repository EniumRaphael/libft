/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:47:28 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 18:12:52 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

/**
 * @brief Check if the character is alpha-numeric
 *
 * @param c the character
 * @return the character if alphanumeric or 0 if not
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
