# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/03 18:02:18 by jose-gon          #+#    #+#              #
#    Updated: 2025/04/03 18:03:10 by jose-gon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = obj

FILES = main.cpp ClapTrap.cpp
OBJ_FILES = $(addprefix $(OBJ_DIR)/, $(FILES:.cpp=.o))

all : $(NAME)

$(NAME): $(OBJ_FILES)
	c++ $(CFLAGS) -o $@ $^
	
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	c++ $(CFLAGS) -I./ -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	
fclean: clean 
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
