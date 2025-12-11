# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rparodi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/12 11:05:05 by rparodi           #+#    #+#              #
#    Updated: 2025/12/11 16:34:31 by rparodi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

# Name
NAME = libft.a
PROJECT = libft

# Commands
CC ?= clang
RM = rm -rf

# Flags
CFLAGS = -Werror -Wextra -Wall

INC_DIR = includes/libft
CPPFLAGS = $(addprefix -I, $(INC_DIR)) -MMD -MP
LDFLAGS = -L $(OBJDIRNAME) -lft

# Objects
OBJDIRNAME = ./build
OBJ = $(addprefix $(OBJDIRNAME)/,$(SRC:.c=.o))

#Colors
GREEN = \033[32m
GREY = \033[0;90m
RED = \033[0;31m
GOLD = \033[38;5;220m
END = \033[0m

# Rules

# All (make all)
all: header lib footer

lib:
	@make --no-print-directory -f ./libft.mk

clean:
	@printf '$(GREY) Removing $(END)$(RED)Objects$(END)\n'
	@printf '$(GREY) Removing $(END)$(RED)Objects Folder$(END)\n'
	@$(RM) $(OBJDIRNAME)

fclean: clean
	@printf '$(GREY) Removing $(END)$(RED)Program$(END)\n'
	@$(RM) $(NAME)
	@$(RM) ./.test/
	@echo ""

re: header fclean lib

tmux:
	@tmux new-session -d -s $(PROJECT)
	@tmux send-keys -t $(PROJECT):0 'vim' C-m
	@tmux split-window -h -t $(PROJECT):0
	@tmux resize-pane -t $(PROJECT):0.0 -x 70
	@tmux new-window -t $(PROJECT):1 -n 'lazygit'
	@tmux send-keys -t $(PROJECT):1 'lazygit' C-m
	@tmux select-window -t $(PROJECT):0
	@tmux attach-session -t $(PROJECT)

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
		@printf '              $(GREY)The compilation is$(END) $(GOLD)finished$(END)\n               $(GREY)Have a good $(END)$(GOLD)correction !$(END)\n'

TEST_SRCS := $(shell find test -type f -name '*.c' 2>/dev/null)

TEST_BINS := $(patsubst test/%.c,.test/%,$(TEST_SRCS))

test: fclean $(TEST_BINS) test-run footer

.test/%: test/%.c lib $(LIB_NAME)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(CPPFLAGS) $< $(LDFLAGS) -o $@

test-run:
	@set -e
	@for t in $(TEST_BINS); do \
		printf "\n\n$(GREY)>> Running $(GOLD)$$t$(END)\n"; \
		TERM=xterm $$t; \
	done; \

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
.PHONY: all bonus clean fclean re footer header clangd tmux test

-include	${OBJ:.o=.d}
