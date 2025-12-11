# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2025/11/26 17:20:35 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

# Name
MODULE_NAME = print
NAME = lib$(MODULE_NAME).a

SRC =	ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_printf.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c \
		ft_put.c

CC ?= clang
CFLAGS ?= -Werror -Wextra -Wall
CPPFLAGS = $(addprefix -I, $(INC_DIR)) -MMD -MP

OBJ = $(addprefix $(OBJDIRNAME)/$(MODULE_NAME)/,$(SRC:.c=.o))

RM ?= rm -rf

GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

all: $(NAME)

clean:
	@printf '$(GREY) Removing $(END)$(RED)Module $(MODULE_NAME)$(END)\n'
	@$(RM) $(OBJDIRNAME)

fclean:
	@$(RM) $(NAME)

re:

$(NAME): $(OBJ)
	@mkdir -p $(OBJDIRNAME)
	@ar rc $(OBJDIRNAME)/$(NAME) $(OBJ)
	@ranlib $(OBJDIRNAME)/$(NAME)

$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf '%s$(GREY) Compiling $(END)$(GREEN)$<$(END)\n' $(INDENT)
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

.PHONY: all bonus clean fclean re

-include $(OBJ:.o=.d)
