/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_strncpy
*/

#include "my.h"

/*
Copies a string n times into another
@param dest string
@param src string
*/
char *my_strncpy(char *dest, char const *src, int n)
{
    for (int j = 0; j < n; j++)
        dest[j] = src[j];
    return dest;
}
