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
    int j = 0;

    for (; src[j] != '\0'; j++) {
        dest[j] = src[j];
    }
    dest[j] = '\0';
    return dest;
}
