# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    convert.mk                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2025/11/26 17:10:14 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

# Name
MODULE_NAME = convert
NAME = lib$(MODULE_NAME).a

SRC =	ft_atoll.c \
		ft_atou.c \
		ft_atoi.c \
		ft_itoa.c

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
	@$(RM) ./.test/

re:

$(NAME): $(OBJ)
	@mkdir -p $(OBJDIRNAME)
	@ar rc $(OBJDIRNAME)/$(NAME) $(OBJ)
	@ranlib $(OBJDIRNAME)/$(NAME)

$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf '$(GREY) Compiling $(END)$(GREEN)$<$(END)\n'
	@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

.PHONY: all bonus clean fclean re 

-include $(OBJ:.o=.d)
