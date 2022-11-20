# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sleleu <sleleu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 17:22:54 by sleleu            #+#    #+#              #
#    Updated: 2022/11/20 20:18:00 by sleleu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

SRC = main.cpp \
	  Bureaucrat.cpp \
	  Form.cpp \
	  ShrubberryCreationForm.cpp \
	  RobotomyRequestForm.cpp \
	  PresidentialPardonForm.cpp \
	  Intern.cpp \

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
