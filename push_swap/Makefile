# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 15:17:34 by ftuncer           #+#    #+#              #
#    Updated: 2022/05/26 13:12:11 by ftuncer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

FRAMEWORK = ft_printf/libftprintf.a libft/libft.a

APP = pushswap

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all : $(NAME) run

run : make-diff
	$(CC) $(CFLAGS) $(NAME) $(FRAMEWORK) -o pushswap

make-diff:
	@make -C ft_printf

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)
	@make fclean -C libft
	@make fclean -C ft_printf
	@rm -rf $(APP)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
