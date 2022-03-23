# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 14:18:22 by jwilliam          #+#    #+#              #
#    Updated: 2022/03/09 14:27:50 by jwilliam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FDS

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

MAIN = Intro_Program.c

FILES =	Intro_Program.c

OBJS = $(FILES:.c=.o)

.c.o:
	@$(CC) -c $(FLAGS) -I includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		@$(MAKE) re -C ./libft
		@cp libft/libft.a ./$(NAME).a
		@ar rcs $(NAME).a $(OBJS)
		@$(CC) $(FLAGS) $(NAME).a $(MAIN) -o $(NAME) -I includes/
		@echo " - FDS program created"

clean:
		@$(MAKE) clean -C ./libft
		@$(RM) $(OBJS)
		@echo " - Cleaned FDS Program obj files"

fclean:	clean
		@$(RM) $(NAME)
		@$(RM) $(NAME).a
		@$(MAKE) fclean -C ./libft
		@echo " - Cleaned FDS Program file"

re: fclean all

.PHONY: clean fclean all re
