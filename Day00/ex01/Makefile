#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kradoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/15 18:05:51 by kradoste          #+#    #+#              #
#    Updated: 2019/07/16 18:23:43 by kradoste         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = phonebook
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