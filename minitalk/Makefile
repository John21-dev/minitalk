# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmacera- <jmacera-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 10:44:54 by jmacera-          #+#    #+#              #
#    Updated: 2024/03/21 13:37:46 by jmacera-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
SRCCLIENT = client.c
OBJSCLIENT = $(SRCCLIENT:.c=.o)

SRCSERVER = server.c
OBJSSERVER = $(SRCSERVER:.c=.o)

CFLAGS = -Wall -Wextra -Werror
LIB = ./printf/libftprintf.a

all: $(NAME)

$(NAME): $(OBJSSERVER) $(OBJSCLIENT)
	@echo "Compiling stuff"
	@make -C ./printf
	@gcc -o server $(SRCSERVER) $(CFLAGS) $(LIB)
	@gcc -o client $(SRCCLIENT) $(CFLAGS) $(LIB)
	@echo "Compiling completed"

clean:
	@echo "Cleaning stuff"
	@rm -f $(OBJSSERVER) $(OBJSCLIENT)
	@rm -f ./printf/*.o
	@echo "Everything ok"

fclean:
	@rm -f server client
	@rm -f ./ft_printf/*.o ./ft_printf/*.a

re: fclean all

.PHONY: all clean fclean re
