/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:28 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 18:13:17 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if the character is alpha numeric
 *
 * @param c the character
 * @return the character if numeric or 0 if not
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
