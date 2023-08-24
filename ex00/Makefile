# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 03:32:04 by pbureera          #+#    #+#              #
#    Updated: 2023/08/24 11:16:38 by pbureera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
FILES		= megaphone
SRCS		= $(addsuffix .cpp, $(FILES))
OBJS		= $(addsuffix .o, $(FILES))

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $^

.cpp.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test