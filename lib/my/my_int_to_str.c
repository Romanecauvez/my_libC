/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** Display number
*/

#include "my.h"
#include <stdio.h>

int count_digits(long nb)
{
    int count = 0;

    if (nb == 0) {
        return 1;
    }
    if (nb < 0) {
        nb = -nb;
        count++;
    }
    while (nb != 0) {
        nb /= 10;
        count++;
    }
    return count;
}

char *my_int_to_str(long nb)
{
    int nb_count = 0;
    char *nbr = malloc(sizeof(char) * (count_digits(nb) + 1));
    long i = 1;

    if (nbr == NULL)
        return NULL;
    nbr[count_digits(nb)] = '\0';
    if (nb < 0) {
        nbr[0] = '-';
        nb *= -1;
        nb_count++;
    }
    while ((nb / i) >= 10)
        i = i * 10;
    while (i > 0) {
        nbr[nb_count] = (48 + ((nb / i) % 10));
        i /= 10;
        nb_count++;
    }
    return nbr;
}
