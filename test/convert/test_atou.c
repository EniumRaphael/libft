/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atou.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:54:42 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/08 10:20:37 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "convert.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*str[] = {"", "0", "42", "-42", "+-42",
		"2147483647", "\v\t13", "\r\n7"};
	size_t		i;
	char		*end;

	i = 0;
	while (i < 9)
	{
		if (ft_atou(str[i]) != strtoull(str[i], &end, 10))
		{
			dprintf(2, "%s✘ Found %zu, expected %llu%s\n", CLR_RED,
				ft_atou(str[i]), strtoull(str[i], &end, 10), RESET);
			exit(1);
		}
		else
			printf("%s✔%s ", CLR_GREEN, RESET);
		i++;
	}
	ft_atou(NULL);
	printf("%s✔%s", CLR_GREEN, RESET);
	puts("\n");
}
