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
		day_03/my_print_alpha.c	\
		day_03/my_print_revalpha.c	\
		day_03/my_print_digits.c	\
		day_03/my_print_comb.c	\
		day_03/my_print_comb2.c	\
		my_put_nbr.c	\
		my_dput_nbr.c	\
		day_04/my_swap.c	\
		day_04/my_strlen.c	\
		day_04/my_evil_str.c	\
		my_swapchar.c	\
		my_strrev.c		\
		day_04/my_getnbr.c		\
		# my_strcat.c		\
		# my_strdup.c		\
		# my_strcpy.c		\
		# my_strncpy.c	\
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
