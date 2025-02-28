/*
** EPITECH PROJECT, 2024
** my_print_char_arr
** File description:
** print a array of string
*/

#include <unistd.h>
#include "my.h"

int my_print_char_arr(char **name)
{
    for (int i = 0; name[i]; i++)
        my_printf("%s\n", name[i]);
    return 1;
}
