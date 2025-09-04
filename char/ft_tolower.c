/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:54 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 11:42:13 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief convert the upper case to lower case
 *
 * @param c the character
 * @return the character to lower case if is on upper
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
