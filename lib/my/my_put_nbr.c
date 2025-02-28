/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_put_nbr
*/
/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_put_nbr
*/

#include "my.h"

static int verification(int nbr)
{
    if (nbr < INT_MIN || nbr > INT_MAX)
        return 0;
    if (nbr == 0) {
        my_putchar('0');
        return 0;
    }
    return 1;
}

/*
Write a given number to the standard output
@param nbr number
*/
int my_put_nbr(int nbr)
{
    int tmp = 0;
    int len = 0;
    int tmp2 = 0;

    if (verification(nbr) == 0)
        return 0;
    if (my_isneg(nbr)) {
        my_putchar('-');
        nbr *= -1;
    }
    tmp2 = nbr % 10;
    len = nbr_len(nbr);
    for (; len > 1; len--) {
        tmp = nbr / power(len - 1);
        nbr %= power(len - 1);
        my_putchar(tmp + 48);
    }
    my_putchar(tmp2 + 48);
    return 0;
}

int my_put_nbr_p(va_list *ap, int p)
{
    (void)p;
    return my_put_nbr(va_arg(*ap, int));
}
