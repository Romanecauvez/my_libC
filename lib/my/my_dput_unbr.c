/*
** EPITECH PROJECT, 2024
** my_put_unbr
** File description:
** my_printf
*/

#include "my.h"
#include <limits.h>

int dverification_u(int fd, unsigned int nb)
{
    if (nb > UINT_MAX)
        return 0;
    if (nb == 0) {
        my_dputchar(fd, '0');
        return 0;
    }
    return 1;
}

int my_dput_unbr(int fd, unsigned int nb)
{
    int i = nb % 10;
    int j = nb / 10;

    if (dverification_u(fd, nb) == 0)
            return 0;
    if (nb <= 9)
        my_dputchar(fd, nb + 48);
    if (nb > 9) {
        my_dput_unbr(fd, j);
        my_dputchar(fd, i + 48);
    }
    return 0;
}

int my_dput_unbr_p(int fd, va_list *ap, int p)
{
    (void)p;
    return my_dput_unbr(fd, va_arg(*ap, unsigned int));
}
