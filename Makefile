# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caeduard <caeduard@student.42sp.org.br     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 15:44:26 by caeduard          #+#    #+#              #
#    Updated: 2021/12/12 13:42:54 by caeduard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 		ft_printf.c ft_printf_utils.c ft_convert.c

OBJECTS =	$(SRCS:%.c=%.o)

INCLUDES = ft_printf.h


all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(SRCS) $(INCLUDES)
	@gcc -Wextra -Werror -Wall -c $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re