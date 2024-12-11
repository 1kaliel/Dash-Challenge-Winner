# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: .frnki   <frnki@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 13:25:06 by .frnki            #+#    #+#              #
#    Updated: 2024/11/23 14:42:42 by .frnki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS - CUSTOM
BLACK_ON_G	:= \033[42;30m
COLOR_OFF	:= \033[0m

# VARIABLES
NAME		:= printf.a
CC		:= cc
CFLAGS		:= -Wall -Wextra -Werror
SOURCE_FILES	:= ft_putchar.c ft_puthexa.c ft_putnbr.c ft_putptr.c \
	       	ft_putstr.c ft_putunsigned.c ft_printf.c ft_format.c
OBJECT_FILES	:= ${SOURCE_FILES:.c=.o}

# COMMANDS
all: $(NAME)

$(NAME): $(OBJECT_FILES)
	@ar -rcs $(NAME) $(OBJECT_FILES)
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#         PRINTF COMPILED     .frnki  #$(COLOR_OFF)"
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJECT_FILES)
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#          PRINTF CLEANED     .frnki  #$(COLOR_OFF)"
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
