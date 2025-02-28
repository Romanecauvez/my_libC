/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** my_nbrlen
*/

int nbr_len(int nbr)
{
    int i = 0;

    for (; nbr > 0; i++)
        nbr /= 10;
    return i;
}
