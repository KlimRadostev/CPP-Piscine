#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 15:54:17 by kradoste          #+#    #+#              #
#    Updated: 2019/07/17 17:03:42 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ZombieApocalypse
CC = g++
FLAGS = -Wall -Wextra -Werror
SRC = *.cpp

$(NAME): $(SRC)
	@$(CC) $(FLAGS) -o $(NAME) $(SRC)

all: $(NAME)

clean:
	@/bin/rm -f *~
	@/bin/rm -f \#*\#

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all