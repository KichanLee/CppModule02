# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kichan <kichan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:53:49 by kichlee           #+#    #+#              #
#    Updated: 2023/12/18 19:59:20 by kichan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	./a.out
CXX			=	c++ 
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf
SRCS		=	Fixed.cpp \
				Point.cpp \
				bsp.cpp   \
				main.cpp
OBJS		=	${SRCS:.c=.o}

all	:
	@$(MAKE)  $(NAME)

$(NAME) : $(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o : %.c
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@$(RM)

fclean : clean
	@$(RM) $(NAME)

re :
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re