# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 02:36:10 by ohw               #+#    #+#              #
#    Updated: 2022/09/02 15:39:53 by hoh              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME=megaphone
SRCSDIR=./
INCS=./
SRCS=megaphone.cpp
OBJS=${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $(OBJS) -I$(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
