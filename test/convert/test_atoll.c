/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:54:42 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 15:05:31 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"
#include "convert.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char	*str[] = {"", "0", "42", "-42", "+-42", "-2147483648",
		"2147483647", "9223372036854775807", "-9223372036854775808"};
	size_t		i;

	i = 0;
	while (i < 7)
	{
		if (ft_atoll(str[i]) != atoll(str[i]))
		{
			dprintf(2, "%s✘ Found %lli, expected %lli%s\n", CLR_RED,
				ft_atoll(str[i]), atoll(str[i]), RESET);
			exit(1);
		}
		else
			printf("%s✔%s ", CLR_GREEN, RESET);
		i++;
	}
	ft_atoll(NULL);
	printf("%s✔%s", CLR_GREEN, RESET);
	puts("\n");
}
