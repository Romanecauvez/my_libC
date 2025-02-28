/*
** EPITECH PROJECT, 2024
** B-CPE-101-LIL-1-1-myprintf-romane.cauvez
** File description:
** my_float_or_scient_that_is_the_question
*/

#include "my.h"

int dput_float_scient(int fd, float f, int m)
{
    int i = (int) f;
    int tmp = m;

    for (; tmp > 0; tmp--)
        i = i / 10;
    if (i == 0) {
        m -= nbr_len((int)f);
        if (f < 0) {
            f = -f;
            my_dputchar(fd, '-');
        }
        my_dputfloat(fd, f, m);
    } else if (i > 0)
        my_dput_scient_pos(fd, f, m - 1);
    return 0;
}

int dput_float_scient_min(int fd, float f, int m)
{
    int i = (int) f;
    int tmp = m;

    for (; tmp > 0; tmp--)
        i = i / 10;
    if (i == 0) {
        m -= nbr_len((int)f);
        if (f < 0) {
            f = -f;
            my_dputchar(fd, '-');
        }
        my_dputfloat(fd, f, m);
    } else if (i > 0)
        my_dput_scient_min_pos(fd, f, m - 1);
    return 0;
}

int dput_float_scient_p(int fd, va_list *ap, int p)
{
    if (p == -1)
        p = 6;
    return dput_float_scient(fd, va_arg(*ap, double), p);
}

int dput_float_scient_min_p(int fd, va_list *ap, int p)
{
    if (p == -1)
        p = 6;
    return dput_float_scient_min(fd, va_arg(*ap, double), p);
}
