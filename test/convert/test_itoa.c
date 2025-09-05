/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:54:42 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:10:48 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "convert.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	const int	integer[] = {0, 42, -42, + -42, -2147483648, 2147483647};
	char		result[1024];
	size_t		i;

	i = 0;
	while (i < 7)
	{
		sprintf(result, "%d", integer[i]);
		if (strcmp(ft_itoa(integer[i]), result))
		{
			dprintf(2, "%s✘ Found %s, expected %s%s\n", CLR_RED,
				ft_itoa(integer[i]), result, RESET);
			exit(1);
		}
		else
			printf("%s✔%s ", CLR_GREEN, RESET);
		i++;
	}
	ft_atoi(NULL);
	printf("%s✔%s", CLR_GREEN, RESET);
	puts("\n");
}
