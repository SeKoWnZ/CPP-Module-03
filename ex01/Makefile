# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 18:43:42 by jose-gon          #+#    #+#              #
#    Updated: 2025/04/23 18:28:16 by jose-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

all : $(NAME)

$(NAME): $(OBJ_FILES)
	clang++ $(CFLAGS) -o $@ $^
	
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	clang++ $(CFLAGS) -I./ -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
