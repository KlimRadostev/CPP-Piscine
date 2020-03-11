#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 15:54:17 by kradoste          #+#    #+#              #
#    Updated: 2019/07/15 15:57:43 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = a.out
CC = g++
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp

$(NAME): $(SRC)
	@$(CC) $(FLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	@/bin/rm -f *~
	@/bin/rm -f \#*\#

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all