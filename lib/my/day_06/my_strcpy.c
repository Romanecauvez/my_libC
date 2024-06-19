/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_strcpy
*/

/*
Copies a string into another
@param dest string
@param src string
*/
char *my_strcpy(char *dest, char const *src)
{
    for (int j = 0; src[j]; j++)
        dest[j] = src[j];
    return dest;
}
