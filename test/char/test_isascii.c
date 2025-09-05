/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:54:42 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 10:40:18 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"
#include "color.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	unsigned char	c;

	c = 0;
	while (c <= 128)
	{
		if (ft_isascii(c) != isascii(c))
		{
			printf("%s✘ Found %i, excepted %i%s\n", CLR_RED, ft_isascii(c),
				isascii(c), RESET);
			exit(1);
		}
		else
			printf("%s✔%s ", CLR_GREEN, RESET);
		c++;
	}
}
