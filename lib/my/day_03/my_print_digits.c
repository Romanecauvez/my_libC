/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_print_digits
*/

#include "../my.h"

int my_print_digits(void)
{
    for (int i = 48; i <= 57; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
