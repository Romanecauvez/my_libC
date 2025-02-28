/*
** EPITECH PROJECT, 2024
** my_arraylen
** File description:
** arraylen
*/

int my_arraylen(char **array)
{
    int i = 0;

    for (; array[i]; i++);
    return i;
}
