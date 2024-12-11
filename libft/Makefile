# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: .frnki   <frnki@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/06 13:25:06 by .frnki            #+#    #+#              #
#    Updated: 2024/11/23 14:20:42 by .frnki           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS - CUSTOM
BLACK_ON_G	= \033[42;30m
COLOR_OFF	= \033[0m

# VARIABLES
NAME		= libft++.a
CC		= cc
CFLAGS		= -Wall -Wextra -Werror

# PRINTF
PRINTF_DIR	= ./printf
PRINTF		= $(PRINTF_DIR)/printf.a

#SRC- & OBJ-FILES
SOURCE_FILES 	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
		ft_strnstr.c ft_striteri.c ft_strrchr.c ft_strtrim.c \
		ft_substr.c ft_tolower.c ft_toupper.c ft_lstadd_back.c \
		ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
		get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \

OBJECT_FILES = ${SOURCE_FILES:.c=.o}

# ARCHIVE MERGING
all: $(NAME)
$(NAME): $(OBJECT_FILES) $(PRINTF)
	@ar -rcs $(NAME) $(OBJECT_FILES) $(PRINTF)
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#        LIBFT++ COMPILED     .frnki  #$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
$(PRINTF):
	@make -sC $(PRINTF_DIR)
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
clean:
	@make clean -sC $(PRINTF_DIR)
	@rm -f $(OBJECT_FILES) 
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#         LIBFT++ CLEANED     .frnki  #$(COLOR_OFF)"
	@echo "$(BLACK_ON_G)#######################################$(COLOR_OFF)"
fclean: clean
	@rm -f $(PRINTF)
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
