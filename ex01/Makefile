# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbureera <pbureera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/03 03:32:08 by pbureera          #+#    #+#              #
#    Updated: 2023/08/24 11:19:31 by pbureera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= MyAwesomePhonebook
FILES		= main PhoneBook Contact
INCLUDES	= PhoneBook.hpp Contact.hpp
SRCS		= $(addsuffix .cpp, $(FILES))
OBJS		= $(addsuffix .o, $(FILES))

CC			= clang++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $^

.cpp.o: $(SRCS) $(INCLUDES)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test