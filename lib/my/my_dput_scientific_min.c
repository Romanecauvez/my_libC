/*
** EPITECH PROJECT, 2024
** scientific
** File description:
** my_printf
*/

#include "my.h"

int my_dput_scient_min_nega(int fd, double f, int n)
{
    int count = 0;

    if (f < 0) {
        f = - f;
        my_dputchar(fd, '-');
    }
    while (f < 1) {
        f = f * 10;
        count++;
    }
    my_dputfloat(fd, f, n);
    my_dputchar(fd, 'e');
    my_dputchar(fd, '-');
    if (count <= 9)
        my_dputchar(fd, '0');
    my_dput_nbr(fd, count);
    return 0;
}

int my_dput_scient_min_pos(int fd, double f, int n)
{
    int count = 0;

    if (f < 0) {
        f = -f;
        my_dputchar(fd, '-');
    }
    while (f > 10) {
        f = f / 10;
        count++;
    }
    my_dputfloat(fd, f, n);
    my_dputchar(fd, 'e');
    my_dputchar(fd, '+');
    if (count < 10)
        my_dputchar(fd, '0');
    my_dput_nbr(fd, count);
    return 0;
}

int my_dput_scient_min(int fd, double f, int n)
{
    if (f > 0 && f < 1) {
        my_dput_scient_min_nega(fd, f, n);
    } else if (f < 0 && f > -1) {
        my_dput_scient_min_nega(fd, f, n);
    } else {
        my_dput_scient_min_pos(fd, f, n);
    }
    return 0;
}

int my_dput_scient_min_p(int fd, va_list *ap, int p)
{
    if (p == -1)
        p = 6;
    return my_dput_scient_min(fd, va_arg(*ap, double), p);
}
