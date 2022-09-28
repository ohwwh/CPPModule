# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 02:36:10 by ohw               #+#    #+#              #
#    Updated: 2022/09/26 16:08:51 by hoh              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CPPFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=mutant
INCS=./
SRCS=main.cpp
OBJS=${SRCS:.cpp=.o}

all : $(NAME)

%.o : %.cpp
	$(CXX) $(CPPFLAGS) -I$(INCS) -o $@ -c $<

$(NAME) : $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJS) -I$(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: 
	make fclean
	make all

.PHONY: all clean fclean re
