/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_print_revalpha
*/

#include "../my.h"

int my_print_revalpha(void)
{
    for (int i = 122; i >= 97; i--) {
        my_putchar(i);
    }
    my_putchar('\n');
    return 0;
}
