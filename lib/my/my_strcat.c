/*
** EPITECH PROJECT, 2024
** delivery_2.0
** File description:
** my_strcat
*/

#include "my.h"

/*
Concat two str together
@param dest string
@param src string
*/
char *my_strcat(char *dest, char const *src)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen((char *)src);
    char *concatanated = malloc(sizeof(char) * (len_dest + len_src));

    my_strcpy(concatanated, dest);
    my_strcpy(&concatanated[len_dest], src);
    return concatanated;
}
