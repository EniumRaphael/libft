# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2024/10/31 17:26:05 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

# Name
NAME = libft.a

# Commands
CC = cc
RM = rm -rf

# Flags
CFLAGS = -Werror -Wextra -Wall
CFLAGS += -g3 -MMD
# CFLAGS += -lm

# CFLAGS += -fsanitize=address
# CFLAGS += -fsanitize=thread

LDFLAGS = -L.
LDLIBS = -lft

INCLUDES =	./includes/libft/

# Objects
OBJDIRNAME = ./build
OBJ = $(addprefix $(OBJDIRNAME)/,$(SRC:.c=.o))

SRC =	char/ft_isdigit.c \
		char/ft_isalnum.c \
		char/ft_isalpha.c \
		char/ft_isascii.c \
		char/ft_isprint.c \
		char/ft_tolower.c \
		char/ft_toupper.c \
		convert/ft_atoi.c \
		convert/ft_atoll.c \
		convert/ft_itoa.c \
		list/ft_lstadd_back.c \
		list/ft_lstadd_front.c \
		list/ft_lstclear.c \
		list/ft_lstdelone.c \
		list/ft_lstiter.c \
		list/ft_lstlast.c \
		list/ft_lstmap.c \
		list/ft_lstnew.c \
		list/ft_lstsize.c \
		memory/ft_bzero.c \
		memory/ft_calloc.c \
		memory/ft_memchr.c \
		memory/ft_memcmp.c \
		memory/ft_memcpy.c \
		memory/ft_memmove.c \
		memory/ft_memset.c \
		print/ft_printf.c \
		print/ft_put.c \
		print/ft_putchar_fd.c \
		print/ft_putendl_fd.c \
		print/ft_putnbr_fd.c \
		print/ft_putstr_fd.c \
		str/ft_split.c \
		str/ft_strchr.c \
		str/ft_strcmp.c \
		str/ft_strcpy.c \
		str/ft_strdup.c \
		str/ft_striteri.c \
		str/ft_strjoin.c \
		str/ft_strlcat.c \
		str/ft_strlcpy.c \
		str/ft_strlen.c \
		str/ft_strmapi.c \
		str/ft_strncmp.c \
		str/ft_strnstr.c \
		str/ft_strrchr.c \
		str/ft_strtrim.c \
		str/ft_substr.c

# Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

# Rules

# All (make all)
all: header $(NAME) footer

lib: $(NAME)

# Bonus (make bonus)
bonus: header $(OBJ) $(LIB_OBJ) footer
	@mkdir -p $(OBJDIRNAME)
	@mkdir -p $(OBJDIRNAME)/$(SRCDIRNAME)
	@printf '$(GREY) Be Carefull ur in $(END)$(GREEN)Debug Mode$(END)\n'
	@cc $(CFLAGS) -D BONUS=1 -o $(NAME) $(OBJ) $(LIB_OBJ)

# Clean (make clean)
clean:
	@printf '$(GREY) Removing $(END)$(RED)Objects$(END)\n'
	@printf '$(GREY) Removing $(END)$(RED)Objects Folder$(END)\n'
	@$(RM) $(OBJDIRNAME)

# Clean (make fclean)
fclean: clean
	@printf '$(GREY) Removing $(END)$(RED)Program$(END)\n'
	@$(RM) $(NAME)
	@echo ""

# Restart (make re)
re: header fclean all

# Dependences for all
$(NAME): $(OBJ)
	@mkdir -p $(OBJDIRNAME)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

# Creating the objects
$(OBJDIRNAME)/%.o: %.c
	@mkdir -p $(dir $@)
	@printf '$(GREY) Compiling $(END)$(GREEN)$<$(END)\n'
	@cc $(CFLAGS) -o $@ -c $< -I$(INCLUDES)

#	Header
header:
		@clear
		@printf '\n\n'
		@printf '$(GOLD)            *******     ****** ******* $(END)\n'
		@printf '$(GOLD)          ******        ***    ******* $(END)\n'
		@printf '$(GOLD)      *******           *      ******* $(END)\n'
		@printf '$(GOLD)     ******                  ******* $(END)\n'
		@printf '$(GOLD)  *******                  ******* $(END)\n'
		@printf '$(GOLD) *******************    *******      * $(END)\n'
		@printf '$(GOLD) *******************    *******    *** $(END)\n'
		@printf '$(GOLD)              ******    ******* ****** $(END)\n'
		@printf '$(GOLD)              ******  $(END)\n'
		@printf '$(GOLD)              ******  $(END)\n'
		@printf '$(GREY)                                      Made by rparodi$(END)\n\n'

#	Footer
footer:
		@printf "\n"
		@printf "$(GOLD)                   ,_     _,$(END)\n"
		@printf "$(GOLD)                   | \\___//|$(END)\n"
		@printf "$(GOLD)                   |=6   6=|$(END)\n"
		@printf "$(GOLD)                   \\=._Y_.=/$(END)\n"
		@printf "$(GOLD)                    )  \`  (    ,$(END)\n"
		@printf "$(GOLD)                   /       \\  (('$(END)\n"
		@printf "$(GOLD)                   |       |   ))$(END)\n"
		@printf "$(GOLD)                  /| |   | |\\_//$(END)\n"
		@printf "$(GOLD)                  \\| |._.| |/-\`$(END)\n"
		@printf "$(GOLD)                   '\"'   '\"'$(END)\n"
		@printf '              $(GREY)The compilation is$(END) $(GOLD)finish$(END)\n               $(GREY)Have a good $(END)$(GOLD)correction !$(END)\n'

clangd:
	@printf "CompileFlags:\n" > ./.clangd
	@printf "  Add:\n" >> ./.clangd
	@printf "    - \"-xc\"\n" >> ./.clangd
	@for FLAG in $(CXXFLAGS); do \
		printf "    - \"$$FLAG\"\n" >> ./.clangd; \
	done
	@printf "    - \"-I"$(shell pwd)"/\"\n" >> .clangd;
	@for file in $(INC_DIR); do \
		printf "    - \"-I"$(shell pwd)"/"$$file"\"\n" >> .clangd; \
	done
	@printf "\n" >> ./.clangd
	@printf '$(GREY) Now parsing settings is set in $(END)$(GREEN)./.clangd$(END)\n'

#	Phony
.PHONY: all bonus clean fclean re footer header clangd

-include	${OBJ:.o=.d}
