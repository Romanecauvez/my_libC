/*
** EPITECH PROJECT, 2024
** my_libC
** File description:
** lib header file
*/

#pragma once

#include <unistd.h>

void my_putchar(char c);
void my_dputchar(int fd, char c);
int my_putstr(char *str);
int my_dputstr(int fd, char *str);
int my_print_alpha(void);
int my_print_revalpha(void);
int my_print_digits(void);
int my_isneg(int n);
int my_put_nbr(int nbr);
int my_dput_nbr(int fd, int nbr);
