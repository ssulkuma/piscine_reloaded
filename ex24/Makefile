# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/29 16:46:38 by ssulkuma          #+#    #+#              #
#    Updated: 2021/10/29 16:54:13 by ssulkuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
SRCS = ./srcs/
HEADER = ./includes/*.h
FLAGS = -Wall -Wextra -Werror
FILES = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c \
		$(SRCS)ft_strlen.c $(SRCS)ft_swap.c

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(FILES) $(HEADER)
	ar rc $(NAME) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
