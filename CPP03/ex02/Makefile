# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/23 02:36:10 by ohw               #+#    #+#              #
#    Updated: 2022/09/07 15:16:42 by hoh              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
NAME=fragtrap
INCS=./
SRCS=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS=${SRCS:.cpp=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJS) -I$(INCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
