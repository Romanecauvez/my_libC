/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_evil_str
*/

#include "my.h"

/*
Swap each of the string’s characters, two by two
@param str string
*/
char *my_strrev(char *str)
{
    int len = my_strlen(str);

    if (len == 0)
        return NULL;
    for (int i = 0; i < len / 2; i++) {
        my_swap_char(&str[i], &str[len - 1 - i]);
    }
    return str;
}
