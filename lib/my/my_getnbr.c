/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_getnbr
*/

#include "my.h"

static int translate_into_int(char const *str)
{
    int nbr = 0;

    for (int i = 0; str[i]; i++) {
        nbr *= 10;
        nbr += (int)str[i] - 48;
    }
    return nbr;
}

static char *cut_end_of_str(char *str)
{
    int i = 0;

    for (; str[i] && str[i] > 48 && str[i] < 57; i++);
    str[i] = '\0';
    return str;
}

static char *get_start_str(char const *str)
{
    int i = 0;

    for (; str[i] && str[i] < 48 || str[i] > 57; i++);
    return &str[i];
}

static int count_minus(char const *str)
{
    int i = 0;
    int minus = 0;

    for (; str[i] && str[i] < 48 || str[i] > 57; i++) {
        if (str[i] == '-')
            minus++;
    }
    return minus;
}

/*
Returns an int being the conversion of a string given in parameters
@param str string
*/
int my_getnbr(char const *str)
{
    int minus = 1;
    int nbr = 0;
    char *str_nbr = NULL;

    if (!str)
        return 0;
    if (count_minus(str) % 2 == 1)
        minus = -1;
    str_nbr = get_start_str(str);
    str_nbr = cut_end_of_str(str_nbr);
    nbr = translate_into_int(str_nbr);
    nbr *= minus;
    return nbr;
}
