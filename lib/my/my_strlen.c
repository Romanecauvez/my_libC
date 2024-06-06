/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return i;
}
