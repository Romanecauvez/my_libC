/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_dputchar
*/

#include "my.h"

/*
Write a given character to the given file descriptor
@param fd file descriptor
@param c char to write
*/
void my_dputchar(int fd, char c)
{
    write(fd, &c, 1);
}

int my_dputchar_p(int fd, va_list *ap, int p)
{
    (void)p;
    my_dputchar(fd, va_arg(*ap, int));
    return 0;
}
