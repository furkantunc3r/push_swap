# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftuncer <ftuncer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 16:51:58 by ftuncer           #+#    #+#              #
#    Updated: 2022/05/26 13:12:53 by ftuncer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= ../libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -f
AR			= ar rcs

SRC	= $(wildcard *.c)
OBJ = $(SRC:%.c=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
			make bonus -C $(LIBFT)
			cp ../libft/libft.a .
			mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJ)
clean:
			rm -f *.o
			make clean -C $(LIBFT)

fclean:		clean
			@$(RM) -f $(NAME)
			@$(RM) -f $(LIBFT)/libft.a

re:			fclean all

.PHONY:		all clean fclean re
