# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daskim <daskim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/26 17:17:43 by daskim            #+#    #+#              #
#    Updated: 2021/09/26 20:57:45 by daskim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c ft_funct.c ft_file_out.c ft_print.c

all : $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

fclean :
	rm -f $(NAME)

re: fclean all
