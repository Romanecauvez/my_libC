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

    for (; str[i] && str[i] > 48 && str[i] < 58; i++);
    if (!str[i])
        return str;
    str[i] = '\0';
    return str;
}

static int get_start_str(char *str)
{
    int i = 0;

    for (; str[i] && (str[i] < 48 || str[i] > 58); i++);
    return i;
}

/*
Returns an int being the conversion of a string given in parameters
@param str string
*/
int my_getnbr(char const *str)
{
    int nbr = 0;
    char *str_nbr = NULL;
    char *tmp = my_strdup(str);
    int begin = 0;

    if (!str || !tmp)
        return -1;
    begin = get_start_str(tmp);
    if (begin >= my_strlen(tmp)) {
        free(tmp);
        return 0;
    }
    str_nbr = &tmp[begin];
    str_nbr = cut_end_of_str(str_nbr);
    nbr = translate_into_int(str_nbr);
    free(tmp);
    return nbr;
}
