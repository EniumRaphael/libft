/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:37 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 11:42:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if the character is alpha
 *
 * @param c the character
 * @return the character if alpha or 0 if not
 */
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	return (0);
}
