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

/*
Write a given number to the standard output
@param nbr number
*/
int my_put_nbr(int nbr)
{
    int n = 0;
    float f = (float)nbr;
    int len = 0;

    if (my_isneg(nbr)) {
        my_putchar('-');
        nbr *= -1;
    }
    if (nbr == 0) {
        my_putchar('0');
        return 1;
    }
    len = nbr_len(nbr);
    f = f / power(len);
    for (; len; len--) {
        n = (int)(f * 10);
        f = f * 10 - n;
        my_putchar(n + 48);
    }
    return len;
}
