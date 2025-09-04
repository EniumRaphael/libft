/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:44:26 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 11:41:57 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief convert the lower case to upper case
 *
 * @param c the character
 * @return the character to upper case if is on lower
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
