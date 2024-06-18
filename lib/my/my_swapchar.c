/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_evil_str
*/

#include "my.h"

/*
Swap characters two by two
@param a pointer to character
@param b pointer to character
*/
void my_swap_char(char *a, char *b)
{
    char tmp = *a;

    *a = *b;
    *b = tmp;
}
