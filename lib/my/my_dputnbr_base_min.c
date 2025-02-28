/*
** EPITECH PROJECT, 2024
** my_putnbr_base_min
** File description:
** my_printf
*/

#include "my.h"

int my_dputnbr_base_min(int fd, long long nbr, int base)
{
    char chiffre[] = "0123456789abcdef";

    if (base < 2 || base > 16)
        return 84;
    if (nbr == 0) {
        my_dputchar(fd, '0');
        return 0;
    }
    if (nbr > 0) {
        if (nbr >= base)
            my_dputnbr_base_min(fd, nbr / base, base);
        my_dputchar(fd, chiffre[nbr % base]);
    }
    return 0;
}

int my_dputnbr_base_min_p(int fd, va_list *ap, int p)
{
    (void)p;
    my_dputnbr_base_min(fd, va_arg(*ap, long long), 16);
    return 0;
}

int my_dputnbr_base_o_p(int fd, va_list *ap, int p)
{
    (void)p;
    my_dputnbr_base_min(fd, va_arg(*ap, long long), 8);
    return 0;
}

int my_dputnbr_base_b_p(int fd, va_list *ap, int p)
{
    (void)p;
    my_dputnbr_base_min(fd, va_arg(*ap, long long), 2);
    return 0;
}
