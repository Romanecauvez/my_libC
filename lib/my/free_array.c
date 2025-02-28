/*
** EPITECH PROJECT, 2025
** free array
** File description:
** free a an array
*/

#include <stdlib.h>

void free_array(char **array)
{
    if (!array)
        return;
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
}
