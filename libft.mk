# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2025/12/11 16:53:11 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PROJECT = libft

CC ?= clang
RM = rm -rf

CFLAGS = -Werror -Wextra -Wall

INC_DIR = includes/libft
CPPFLAGS = $(addprefix -I, $(INC_DIR)) -MMD -MP

OBJDIRNAME ?= ./build

MAKE += --no-print-directory

export CC CFLAGS CPPFLAGS INC_DIR OBJDIRNAME MAKE RM

SUB_MAKEFILE =	char/char.mk \
				convert/convert.mk \
				gnl/gnl.mk \
				list/list.mk \
				math/math.mk \
				memory/memory.mk \
				print/print.mk \
				str/str.mk

GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

all:
	@printf '$(GREY) Compiling $(END)$(GOLD)$(PROJECT)$(END)\n'
	@for PART in $(SUB_MAKEFILE); do \
		$(MAKE) -f $$PART all; \
	done
	@( printf 'CREATE $(OBJDIRNAME)/$(NAME)\n'; \
		for f in build/*.a; do \
			[ -e "$$f" ] || continue; \
			[ "$$(basename "$$f")" = "$(NAME)" ] && continue; \
			printf 'ADDLIB %s\n' "$$f"; \
		done; \
		printf 'SAVE\nEND\n' ) | ar -M
	@printf '$(GREY) Linking $(END)$(GOLD)$(NAME)$(END)\n'

clean:
	@for PART in $(SUB_MAKEFILE); do \
		$(MAKE) -f $$PART clean; \
	done
	@echo ""

fclean: clean
	@for PART in $(SUB_MAKEFILE); do \
		$(MAKE) -f $$PART fclean; \
	done
	@echo ""

re: fclean all

$(NAME): $(OBJ)
	@mkdir -p $(OBJDIRNAME)

.PHONY: all bonus clean fclean re

-include $(OBJ:.o=.d)
