/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** power
*/

int power(int i)
{
    int n = 10;

    for (; i - 1 > 0; i--)
        n *= 10;
    return n;
}
