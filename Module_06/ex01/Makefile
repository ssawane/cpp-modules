# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssawane <ssawane@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/01 16:28:48 by ssawane           #+#    #+#              #
#    Updated: 2022/11/07 13:58:51 by ssawane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	serialize
CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f
SRCS		=	$(wildcard *.cpp)
HDRS		=	$(wildcard *.hpp)
OBJS 		=	$(SRCS:%.cpp=%.o)

.PHONY		:	all clean fclean re

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o			:	%.cpp $(HDRS)
				$(CXX) $(CXXFLAGS) -c $< -o $@

clean		:	
				$(RM) $(OBJS)

fclean		:	clean
				$(RM) $(NAME)
			
re			:	fclean all

