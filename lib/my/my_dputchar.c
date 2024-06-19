/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** my_dputchar
*/

/*
Write a given character to the given file descriptor
@param fd file descriptor
@param c char to write
*/
void my_dputchar(int fd, char c)
{
    write(fd, &c, 1);
}
