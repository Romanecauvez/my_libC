/*
** EPITECH PROJECT, 2024
** My_pointer
** File description:
** my_printf
*/

#include "my.h"

void my_dpointer(int fd, long long address)
{
    my_dputchar(fd, '0');
    my_dputchar(fd, 'x');
    my_dputnbr_base_min(fd, address, 16);
}

int my_dpointer_p(int fd, va_list *ap, int p)
{
    (void)p;
    my_dpointer(fd, va_arg(*ap, long long));
    return 0;
}
