/*
** EPITECH PROJECT, 2024
** B-CPE-101-LIL-1-1-myprintf-romane.cauvez
** File description:
** my_float_or_scient_that_is_the_question
*/

#include "my.h"

int put_float_scient(float f, int m)
{
    int i = (int) f;
    int tmp = m;

    for (; tmp > 0; tmp--)
        i = i / 10;
    if (i == 0) {
        m -= nbr_len((int)f);
        if (f < 0) {
            f = -f;
            my_putchar('-');
        }
        my_putfloat(f, m);
    } else if (i > 0)
        my_put_scient_pos(f, m - 1);
    return 0;
}

int put_float_scient_min(float f, int m)
{
    int i = (int) f;
    int tmp = m;

    for (; tmp > 0; tmp--)
        i = i / 10;
    if (i == 0) {
        m -= nbr_len((int)f);
        if (f < 0) {
            f = -f;
            my_putchar('-');
        }
        my_putfloat(f, m);
    } else if (i > 0)
        my_put_scient_min_pos(f, m - 1);
    return 0;
}

int put_float_scient_p(va_list *ap, int p)
{
    if (p == -1)
        p = 6;
    return put_float_scient(va_arg(*ap, double), p);
}

int put_float_scient_min_p(va_list *ap, int p)
{
    if (p == -1)
        p = 6;
    return put_float_scient_min(va_arg(*ap, double), p);
}
