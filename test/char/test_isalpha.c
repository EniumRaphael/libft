/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:41:04 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 18:49:58 by rparodi          ###   ########.fr       */
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
		if (ft_isalpha(c) != isalpha(c))
		{
			printf("%s✘ Found %i, expected %i%s\n", CLR_RED, ft_isalpha(c),
				isalpha(c), RESET);
			exit(1);
		}
		else
			printf("%s✔%s ", CLR_GREEN, RESET);
		c++;
	}
}
