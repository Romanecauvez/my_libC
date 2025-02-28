/*
** EPITECH PROJECT, 2024
** my_putnbr_base_min
** File description:
** my_printf
*/

#include "my.h"

int my_putnbr_base_min(long long nbr, int base)
{
    char chiffre[] = "0123456789abcdef";

    if (base < 2 || base > 16)
        return 84;
    if (nbr == 0) {
        my_putchar('0');
        return 0;
    }
    if (nbr > 0) {
        if (nbr >= base)
            my_putnbr_base_min(nbr / base, base);
        my_putchar(chiffre[nbr % base]);
    }
    return 0;
}

int my_putnbr_base_min_p(va_list *ap, int p)
{
    (void)p;
    my_putnbr_base_min(va_arg(*ap, long long), 16);
    return 0;
}

int my_putnbr_base_o_p(va_list *ap, int p)
{
    (void)p;
    my_putnbr_base_min(va_arg(*ap, long long), 8);
    return 0;
}
