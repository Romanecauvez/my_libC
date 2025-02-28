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
int my_putstr(char const *str, int p)
{
    int i = 0;

    if (str == NULL)
        return i;
    for (; str[i] != '\0' && i < p; i++)
        my_putchar(str[i]);
    return i;
}

int my_putstr_p(va_list *ap, int p)
{
    char *str = va_arg(*ap, char *);

    if (p == -1)
        p = my_strlen(str);
    return my_putstr(str, p);
}
