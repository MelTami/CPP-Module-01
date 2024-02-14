# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvavasso <mvavasso@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 16:58:35 by mvavasso          #+#    #+#              #
#    Updated: 2024/02/14 16:58:54 by mvavasso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= Harl
SRCS	= main.cpp Harl.cpp 
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
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME) arquivo banana morango

clean: 
		@rm -rf objects

fclean: clean
		@rm -f $(NAME)
		@rm -f *.replace

re: fclean all

.PHONY: all clean fclean re