# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 02:36:10 by ohw               #+#    #+#              #
#    Updated: 2022/09/23 11:25:43 by hoh              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic
NAME=intern
INCS=./
SRCS=main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS=${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	$(CXX) $(CFLAGS) -I$(INCS) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJS) -I$(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: 
	make fclean
	make all

.PHONY: all clean fclean re
