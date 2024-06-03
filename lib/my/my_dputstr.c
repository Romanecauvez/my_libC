/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_dputstr
*/

#include "my.h"

/*
Write a given string to given file descriptor
@param fd file descriptor
@param str string
*/
int my_dputstr(int fd, char *str)
{
    int i = 0;

    if (str == NULL) {
        return i;
    }
    for (; str[i] != '\0'; i++) {
        my_dputchar(fd, str[i]);
    }
    return i;
}
