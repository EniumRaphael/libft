/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:06:53 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 11:41:49 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if the character is printable
 *
 * @param c the character
 * @return the character if can be print or 0 if not
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	return (0);
}
