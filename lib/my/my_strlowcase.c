/*
** EPITECH PROJECT, 2024
** my_strlowcase
** File description:
** Lower case of string
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    for (int count = 0; count <= my_strlen(str); count++) {
        if (str[count] >= 'A' && str[count] <= 'Z' && str[count] != ' ') {
            str[count] = str[count] + 32;
        }
    }
    return str;
}
