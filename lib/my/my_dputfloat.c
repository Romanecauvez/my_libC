/*
** EPITECH PROJECT, 2024
** B-CPE-101-LIL-1-1-myprintf-romane.cauvez
** File description:
** my_putfloat
*/

#include "my.h"

int my_dputfloat(int fd, float f, int n)
{
    int index = (f - (int)f) * power(n + 1);

    if (index % 10 >= 5)
        index = (index - (index % 10)) / 10 + 1;
    else
        index = (index - (index % 10)) / 10;
    if (index >= 1000000) {
        f += 0.000001;
        index = 0;
    }
    my_dput_nbr(fd, (int)f);
    my_dputchar(fd, '.');
    for (; index < power(n - 1) && n > 1; n--)
        my_dputchar(fd, '0');
    my_dput_nbr(fd, index);
    return 0;
}

int my_dputfloat_p(int fd, va_list *ap, int p)
{
    float f = va_arg(*ap, double);

    if (p == -1)
        p = 6;
    if (f < 0) {
        f = -f;
        my_dputchar(fd, '-');
    }
    return my_dputfloat(fd, f, p);
}
