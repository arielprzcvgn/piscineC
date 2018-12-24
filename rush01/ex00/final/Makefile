# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luwargni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/15 11:41:17 by luwargni          #+#    #+#              #
#    Updated: 2018/07/15 11:49:05 by luwargni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./conditions.c \
	   ./sudoku.c

OBJ = $(SRCS:.c=.o)

CFLAGS += -Werror -Wextra -Wall -I./include

NAME = sudoku

$(NAME): $(OBJ)
	         gcc -o $(NAME) $(OBJ)

all:     $(NAME)

clean:
	        rm -f $(OBJ)

fclean: clean
	        rm -f $(NAME)

re:     fclean all

nn:
	norminette $(SRCS)

.PHONY: all clean fclean re
