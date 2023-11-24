# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2023/11/24 16:24:21 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=cc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
LIBFT = ./libft/ft_strdup.c ./libft/ft_strlcpy.c ./libft/ft_strlen.c
SRC = ./src/ft_printf.c ./src/ft_put.c
OBJ = $(SRC:.c=.o)
OBJLibft = $(LIBFT:.c=.o)

GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

header:
		@echo -e '\n\n'
		@echo -e '$(GOLD)            *******     *****  ******* $(END)'
		@echo -e '$(GOLD)          ******        ***    ******* $(END)'
		@echo -e '$(GOLD)      *******                 ******* $(END)'
		@echo -e '$(GOLD)     ******                 ******* $(END)'
		@echo -e '$(GOLD)  *******                 ******* $(END)'
		@echo -e '$(GOLD) ********************   *******      * $(END)'
		@echo -e '$(GOLD) ********************   *******    *** $(END)'
		@echo -e '$(GOLD)              *******   ******* ****** $(END)'
		@echo -e '$(GOLD)              ******* $(END)'
		@echo -e '$(GOLD)              ******* $(END)\n'
		@echo -e '$(GREY)                                      Made by rparodi$(END)\n\n'

$(NAME): $(OBJ) $(OBJLibft)
		@echo -e '$(GREY) Compiling $(END)$(GOLD)$(NAME)$(END)'
		@ar rc $(NAME) $(OBJ) $(OBJLibft)
		@ranlib $(NAME)

%.o: %.c
		@echo -e '$(GREY) Compiling $(END)$(GREEN)$<$(END)'
		@$(CC) -I. -o $@ -c $? $(CFLAGS)

all: header $(NAME)
		@echo -e '\n$(GREY) Compilation$(END)$(GREEN) Done$(END)'

dev: all bonus clean

clean:
		@echo -e '$(GREY) Removing $(END)$(RED)Object$(END)'
		@$(RM) $(OBJ) $(OBJLibft)

fclean: clean
		@echo -e '$(GREY) Removing $(END)$(RED)Program$(END)'
		@$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re dev header
