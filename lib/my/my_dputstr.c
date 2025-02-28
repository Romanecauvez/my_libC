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
int my_dputstr(int fd, char const *str, int p)
{
    int i = 0;

    if (str == NULL)
        return i;
    for (; str[i] != '\0' && i < p; i++)
        my_dputchar(fd, str[i]);
    return i;
}

int my_dputstr_p(int fd, va_list *ap, int p)
{
    char *str = va_arg(*ap, char *);

    if (p == -1)
        p = my_strlen(str);
    return my_dputstr(fd, str, p);
}
