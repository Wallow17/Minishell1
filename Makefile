##
## EPITECH PROJECT, 2017
## minishell1
## File description:
## Makefile
##

SRC	=	src/minishell1.c		\
		src/my_realloc.c		\
		src/my_str_to_wordarray.c	\
		src/gnl/get_next_line.c		\
		src/builtins/cd.c		\
		src/builtins/env.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CFLAGS	=	-Wall -Wextra -I include/

LDFLAGS	=	-L./lib/my -lmy

all:	$(OBJ)
	cd lib/my/ ; make ; make clean ;
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

tests_run:
