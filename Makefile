# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2023/11/13 19:10:24 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=clang
CFLAGS=-Wall -Wextra -Werror -g2
RM=rm -f
LDFLAGS=-L.
LDLIBS=-lft
SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCBonus = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ = $(SRC:.c=.o)
OBJBonus = $(SRCBonus:.c=.o)

$(NAME): $(OBJ) $(OBJBonus)
		ar rc $(NAME) $(OBJ) $(OBJBonus)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

bonus: $(OBJ) $(OBJBonus)
		ar rc $(NAME) $(OBJ) $(OBJBonus)
		ranlib $(NAME)


dev: all bonus clean

clean:
		$(RM) $(OBJ) $(OBJBonus)

fclean: clean
		$(RM) $(NAME)

re: fclean all bonus

.PHONY: clean clean

so: $(OBJ) $(OBJBonus)
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC) $(SRCBonus)
	gcc -nostartfiles -shared -o libft.so $(OBJ) $(OBJBonus)
