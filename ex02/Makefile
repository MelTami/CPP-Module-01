# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 17:05:41 by mvavasso          #+#    #+#              #
#    Updated: 2024/02/02 17:05:57 by mvavasso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= brain
SRCS	= main.cpp
OBJS		= $(addprefix objects/, $(notdir $(SRCS:.cpp=.o)))
FLAGS		= -Wall -Wextra -Werror -g -std=c++98
CC			= c++

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(FLAGS) -o $(NAME)
	
objects:
	@mkdir -p objects

objects/%.o: %.cpp | objects
	@$(CC) $(FLAGS) -c $< -o $@

run: all
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

clean: 
		@rm -rf objects

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re