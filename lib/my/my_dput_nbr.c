/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_put_nbr
*/

#include "my.h"

int nbr_len(int nbr)
{
    int i = 0;

    for (; nbr > 0; i++) {
        nbr /= 10;
    }
    return i;
}

/*
Write a given number to the given file descriptor
@param fd file descriptor
@param nbr number
*/
int my_dput_nbr(int fd, int nbr)
{
    int n = 0;
    float f = (float)nbr;
    int len = 0;

    if (my_isneg(nbr)) {
        my_dputchar(fd, '-');
        nbr *= -1;
    }
    if (nbr == 0) {
        my_dputchar(fd, '0');
        return 1;
    }
    len = nbr_len(nbr);
    f = f / power(len);
    for (; len; len--) {
        n = (int)(f * 10);
        f = f * 10 - n;
        my_dputchar(fd, n + 48);
    }
    return len;
}

int my_dput_nbr_p(int fd, va_list *ap, int p)
{
    (void)p;
    return my_dput_nbr(fd, va_arg(*ap, int));
}
