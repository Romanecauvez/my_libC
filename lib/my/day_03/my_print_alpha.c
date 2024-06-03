/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_print_alpha
*/

#include "../my.h"

int my_print_alpha(void)
{
    for (int i = 97; i <= 122; i++) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
