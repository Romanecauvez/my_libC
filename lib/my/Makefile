##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## make rules
##

SRC	=	my_putchar.c	\
		my_dputchar.c	\
		my_putstr.c		\
		my_dputstr.c	\
		my_isneg.c		\
		my_put_nbr.c	\
		my_dput_nbr.c	\
		my_swapchar.c	\
		my_strrev.c		\
		my_getnbr.c		\
		my_strcpy.c		\
		my_strncpy.c	\
		# my_strcat.c		\
		# my_strdup.c		\
		# my_arraylen.c	\
		# my_strcmp.c		\
		# my_strncmp.c	\
		# my_strclean.c	\
		# my_str_to_word_array.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	# cp my.h ../../include/

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
