# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    str.mk                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2025/11/26 17:21:35 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

# Name
MODULE_NAME = str
NAME = lib$(MODULE_NAME).a

SRC =	ft_strnstr.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_split.c \
		ft_strrchr.c \
		ft_substr.c \
		ft_strncmp.c \
		ft_strcpy.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_strlcat.c \
		ft_strdup.c \
		ft_strncpy.c \
		ft_strcmp.c

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
