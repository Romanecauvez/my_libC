##
## EPITECH PROJECT, 2024
## delivery_2.0
## File description:
## Makefile
##

SRC     =       my_dput_scientific_min.c	\
				my_put_scientific_min.c	\
				my_dput_float_scient.c	\
				my_str_to_word_array.c	\
				my_str_to_word_array.c	\
				my_put_float_scient.c	\
				my_dputnbr_base_min.c	\
				my_dput_scientific.c	\
				my_putnbr_base_min.c	\
				my_put_scientific.c	\
				my_print_char_arr.c	\
				my_strcapitalize.c	\
				my_dputnbr_base.c	\
				my_strcleanfull.c	\
				my_putnbr_base.c	\
				my_int_to_str.c	\
				my_strlowcase.c	\
				my_dput_unbr.c	\
				my_dputfloat.c	\
				my_dpointer.c	\
				my_dput_nbr.c	\
				my_dputchar.c	\
				my_putfloat.c	\
				my_put_unbr.c	\
				my_arraylen.c	\
				my_swapchar.c	\
				my_dput_nbr.c	\
				my_dputchar.c	\
				my_dputstr.c	\
				my_strncpy.c	\
				my_strncmp.c	\
				my_dputstr.c	\
				my_dprintf.c	\
				my_put_nbr.c	\
				my_putchar.c	\
				free_array.c	\
				my_strcat.c	\
				my_strcpy.c	\
				my_strlen.c	\
				my_strdup.c	\
				my_strcmp.c	\
				my_nbrlen.c	\
				my_putstr.c	\
				my_getnbr.c	\
				my_printf.c	\
				my_strrev.c	\
				my_isneg.c	\
				power.c	\

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

CFLAGS	=		-W -Wall -Wextra -Wpedantic -I./include/ -L. -lmy

all:    $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
