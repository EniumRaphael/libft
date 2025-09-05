/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:54:42 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 11:23:32 by rparodi          ###   ########.fr       */
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
		if (ft_isprint(c) != isprint(c))
		{
			printf("%s✘ Found %i, expected %i%s\n", CLR_RED, ft_isprint(c),
				isprint(c), RESET);
			exit(1);
		}
		else
			printf("%s✔%s ", CLR_GREEN, RESET);
		c++;
	}
	puts("\n");
}
