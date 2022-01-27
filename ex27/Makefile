# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssulkuma <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 18:27:26 by ssulkuma          #+#    #+#              #
#    Updated: 2021/11/01 18:32:18 by ssulkuma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = ft_display_file
SRCS = ft_display_file.c
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
