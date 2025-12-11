/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 11:35:00 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/04 11:42:34 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# define RESET				"\x1b[0m"
# define BOLD				"\x1b[1m"
# define WEAK				"\x1b[2m"
# define ITALIC				"\x1b[3m"
# define UNDERLINE			"\x1b[4m"

# define CLR_BLACK			"\x1b[30m"
# define CLR_RED			"\x1b[31m"
# define CLR_GREEN			"\x1b[32m"
# define CLR_YELLOW			"\x1b[33m"
# define CLR_BLUE			"\x1b[34m"
# define CLR_MAGENTA		"\x1b[35m"
# define CLR_CYAN			"\x1b[36m"
# define CLR_WHITE			"\x1b[37m"

# define BOLD_BLACK			"\x1b[90m"
# define BOLD_RED			"\x1b[91m"
# define BOLD_GREEN			"\x1b[92m"
# define BOLD_YELLOW		"\x1b[93m"
# define BOLD_BLUE			"\x1b[94m"
# define BOLD_MAGENTA		"\x1b[95m"
# define BOLD_CYAN			"\x1b[96m"
# define BOLD_WHITE			"\x1b[97m"

# define BACK_BLACK			"\x1b[40m"
# define BACK_RED			"\x1b[41m"
# define BACK_GREEN			"\x1b[42m"
# define BACK_YELLOW		"\x1b[43m"
# define BACK_BLUE			"\x1b[44m"
# define BACK_MAGENTA		"\x1b[45m"
# define BACK_CYAN			"\x1b[46m"
# define BACK_WHITE			"\x1b[47m"

# define BRIGHTBACK_BLACK	"\x1b[10m0"
# define BRIGHTBACK_RED		"\x1b[10m1"
# define BRIGHTBACK_GREEN	"\x1b[10m2"
# define BRIGHTBACK_YELLOW	"\x1b[10m3"
# define BRIGHTBACK_BLUE	"\x1b[10m4"
# define BRIGHTBACK_MAGENTA	"\x1b[10m5"
# define BRIGHTBACK_CYAN	"\x1b[10m6"
# define BRIGHTBACK_WHITE	"\x1b[10m7"

#endif
