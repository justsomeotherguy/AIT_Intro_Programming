# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 14:18:22 by jwilliam          #+#    #+#              #
#    Updated: 2022/03/25 14:33:35 by jwilliam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FDS

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

FILES = fds.c

all: $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) -C ./libft
		@$(CC) $(FILES) $(FLAGS) -I includes ./libft/libft.a -o $(NAME)
		@echo " - FDS program created"

clean:
		@$(MAKE) clean -C ./libft
		@$(RM) $(OBJS)
		@echo " - Cleaned FDS object files"

fclean:	clean
		@$(MAKE) fclean -C ./libft
		@$(RM) $(NAME)
		@$(RM) $(NAME).a
		@echo " - Cleaned FDS program"

re: fclean all

.PHONY: clean fclean all re
