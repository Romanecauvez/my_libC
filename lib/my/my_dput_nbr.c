/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_put_nbr
*/

#include "my.h"

static int nbr_len(int nbr)
{
    int i = 0;

    for (; nbr > 0; i++) {
        nbr /= 10;
    }
    return i;
}

static int power(int i)
{
    int n = 10;

    for (; i - 1 > 0; i--) {
        n *= 10;
    }
    return n;
}

int my_dput_nbr(int fd, int nbr)
{
    int i = 0;
    int n = 0;
    float f = (float)nbr;
    int len = 0;

    if (my_isneg(nbr)) {
        my_dputchar(fd, '-');
        nbr *= -1;
    }
    len = nbr_len(nbr);
    f = f / power(len);
    for (; i < len; i++) {
        n = (int)(f * 10);
        f = f * 10 - n;
        my_dputchar(fd, n + 48);
    }
    return len;
}
