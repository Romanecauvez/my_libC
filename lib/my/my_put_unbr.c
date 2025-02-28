/*
** EPITECH PROJECT, 2024
** my_put_unbr
** File description:
** my_printf
*/

#include "my.h"
#include <limits.h>

int verification_u(unsigned int nb)
{
    if (nb > UINT_MAX)
        return 0;
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    return 1;
}

int my_put_unbr(unsigned int nb)
{
    int i = nb % 10;
    int j = nb / 10;

    if (verification_u(nb) == 0)
            return 0;
    if (nb <= 9)
        my_putchar(nb + 48);
    if (nb > 9) {
        my_put_unbr(j);
        my_putchar(i + 48);
    }
    return 0;
}

int my_put_unbr_p(va_list *ap, int p)
{
    (void)p;
    return my_put_unbr(va_arg(*ap, unsigned int));
}
