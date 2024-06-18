##
## EPITECH PROJECT, 2024
## my_libC
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_libC

CFLAGS	=	-W -Wall -Wextra -Wpedantic -I./include -L./lib/my -lmy -lm -g

all:	$(NAME)

libr:
	make -C lib/my

$(NAME):	libr $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	make clean -C lib/my
	rm -f $(OBJ)

fclean:	clean
	make fclean -C lib/my
	rm -f $(NAME)

re:	fclean all
	make re -C lib/my
