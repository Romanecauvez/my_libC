/*
** EPITECH PROJECT, 2025
** B-PSU-200-LIL-2-1-minishell1-romane.cauvez
** File description:
** my_strcleanfull
*/

#include "my.h"

char *my_strcleanfull(char *str, char *separator)
{
    char *cleaned = malloc(sizeof(char) * my_strlen(str));
    int x = 0;

    for (int i = 0; str[i]; i++) {
        for (int j = 0; separator[j]; j++) {
            if (separator[j] != str[i]) {
                cleaned[x] = str[i];
                x++;
            }
        }
    }
    cleaned[x] = '\0';
    return cleaned;
}
