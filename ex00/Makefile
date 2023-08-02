# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 03:32:04 by pbureera          #+#    #+#              #
#    Updated: 2023/08/03 03:32:04 by pbureera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
SRCS		= megaphone.cpp

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): ./$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test