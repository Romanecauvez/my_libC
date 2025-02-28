/*
** EPITECH PROJECT, 2024
** my_putnbr_base
** File description:
** my_printf
*/

#include "my.h"

int my_dputnbr_base(int fd, int nbr, int base)
{
    char *chiffre = "0123456789ABCDEF";

    if (base < 2 || base > 16)
        return 0;
    if (nbr == 0) {
        my_dputchar(fd, '0');
        return 0;
    }
    if (nbr > 0) {
        if (nbr >= base)
            my_dputnbr_base(fd, nbr / base, base);
        my_dputchar(fd, chiffre[nbr % base]);
    }
    return 0;
}

int my_dputnbr_base_p(int fd, va_list *ap, int p)
{
    (void)p;
    my_dputnbr_base(fd, va_arg(*ap, long long), 16);
    return 0;
}
