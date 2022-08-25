# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 02:36:10 by ohw               #+#    #+#              #
#    Updated: 2022/08/20 16:46:29 by hoh              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror
NAME=megaphone
SRCSDIR=./
INCS=./
SRCS=megaphone.cpp
OBJS=${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all : $(NAME)

#$(OBJS): $(SRCS)
#	$(CXX) $(CFLAGS) -c $(SRCS)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $(OBJS) -I$(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
