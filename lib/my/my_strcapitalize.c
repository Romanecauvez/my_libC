/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** Function that capitalizes the first letter of each word.
*/

#include "my.h"

int check_number(char *str, int i)
{
    if (str[i] >= '0' && str[i] <= '9')
        return 1;
    else
        return 0;
}

int check_lettre(char *str, int i)
{
    if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65
        && str[i] <= 90))
        return 1;
    else
        return 0;
}

int check_word(char *str, int i)
{
    if (check_lettre(str, i) == 1) {
        if (check_lettre(str, i + 1) == 1)
            return 1;
        return 0;
    }
    return 0;
}

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    if (str[0] >= 97 && str[0] <= 122) {
        str[0] = str[0] - 32;
    }
    for (int i = 1; i < my_strlen(str); i++) {
        if (check_lettre(str, i - 1) == 0 && check_word(str, i) == 1
            && check_number(str, i - 1) == 0) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}
