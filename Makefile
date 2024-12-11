# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: .frnki <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 16:20:42 by .frnki            #+#    #+#              #
#    Updated: 2024/12/07 12:09:37 by efembock         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILER
CC			= cc
CFLAGS 		= -Wall -Wextra -Werror

# VARIABLES
NAME		= marvin

# COLORS - CUSTOM
BLACK_ON_G	= \033[42;30m
COLOR_OFF	= \033[0m

# LIBRARIES
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft++.a
PRINTF_DIR	= $(LIBFT_DIR)/printf
PRINTF		= $(PRINTF_DIR)/printf.a

# SRC- & OBJ-FILES
SOURCE_FILES 	= main.c
OBJECT_FILES 	= ${SOURCE_FILES:.c=.o}

# TARGETS
all: $(NAME)

$(NAME): $(LIBFT) $(OBJECT_FILES)
	@ $(CC) $(CFLAGS) $(OBJECT_FILES) -o $(NAME) $(LIBFT) $(PRINTF)
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#        MARVIN COMPILED      .frnki  #$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"

# LIBFT++ (LIBFT+PRINTF+GET_NEXT_LINE)
$(LIBFT):
	@make -sC $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@make clean -sC $(LIBFT_DIR)
	@rm -f $(OBJECT_FILES)
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#         MARVIN CLEANED      .frnki  #$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
fclean: clean
	@rm -f $(LIBFT)
	@rm -f $(PRINTF)
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
