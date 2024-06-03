/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_putchar
*/

#include "my.h"

/*
Write a given character to the standard output
@param c char to write
*/
void my_putchar(char c)
{
    write(1, &c, 1);
}
