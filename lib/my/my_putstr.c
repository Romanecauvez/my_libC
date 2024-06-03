/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_putstr
*/

#include "my.h"

/*
Write a given string to standard output
@param str string
*/
int my_putstr(char *str)
{
    int i = 0;

    if (str == NULL) {
        return i;
    }
    for (; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return i;
}
