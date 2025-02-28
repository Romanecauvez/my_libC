/*
** EPITECH PROJECT, 2024
** scientific
** File description:
** my_printf
*/

#include "my.h"

int my_put_scient_min_nega(double f, int n)
{
    int count = 0;

    if (f < 0) {
        f = - f;
        my_putchar('-');
    }
    while (f < 1) {
        f = f * 10;
        count++;
    }
    my_putfloat(f, n);
    my_putchar('e');
    my_putchar('-');
    if (count <= 9)
        my_putchar('0');
    my_put_nbr(count);
    return 0;
}

int my_put_scient_min_pos(double f, int n)
{
    int count = 0;

    if (f < 0) {
        f = -f;
        my_putchar('-');
    }
    while (f > 10) {
        f = f / 10;
        count++;
    }
    my_putfloat(f, n);
    my_putchar('e');
    my_putchar('+');
    if (count < 10)
        my_putchar('0');
    my_put_nbr(count);
    return 0;
}

int my_put_scient_min(double f, int n)
{
    if (f > 0 && f < 1) {
        my_put_scient_min_nega(f, n);
    } else if (f < 0 && f > -1) {
        my_put_scient_min_nega(f, n);
    } else {
        my_put_scient_min_pos(f, n);
    }
    return 0;
}

int my_put_scient_min_p(va_list *ap, int p)
{
    if (p == -1)
        p = 6;
    return my_put_scient_min(va_arg(*ap, double), p);
}
