# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 20:27:28 by sleleu            #+#    #+#              #
#    Updated: 2023/03/24 12:34:27 by sleleu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

SRC = main.cpp \
	  PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ) 
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
		rm -rfv $(OBJ)

fclean:	clean
		rm -rfv $(NAME)

re: fclean all

.PHONY: all clean fclean re