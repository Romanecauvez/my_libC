/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** task02
*/

#ifndef _MY_H
    #define _MY_H

    #include <stdarg.h>
    #include <unistd.h>
    #include <limits.h>
    #include <stdlib.h>

char **my_str_to_word_array(char *s, char *delimiter);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcleanfull(char *str, char *separator);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
int my_put_scient_min_pos(double f, int n);
char *cut_format(char *begining_of_flag);
int put_float_scient_min(float f, int m);
int my_printf(const char *format, ...);
int my_put_scient_pos(double f, int n);
int my_put_scient_min(double f, int n);
int my_strcmp(char *str1, char *str2);
int my_putstr(char const *str, int p);
int my_putnbr_base(int nbr, int base);
int put_float_scient(float f, int m);
void my_swap_char(char *a, char *b);
int check_number(char *str, int i);
int check_lettre(char *str, int i);
int my_put_scient(double f, int n);
int my_print_char_arr(char **name);
char *my_strcapitalize(char *str);
int my_put_unbr(unsigned int nb);
char *my_strdup(char const *src);
int my_putfloat(float f, int n);
char *my_strlowcase(char *str);
int my_getnbr(char const *str);
int my_arraylen(char **array);
void free_array(char **array);
char *my_int_to_str(long nb);
int count_space(char *str);
char *my_strrev(char *str);
int my_strlen(char *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int nbr_len(int nbr);
int my_isneg(int nb);
int is_alpha(char c);
int power(int i);

int put_float_scient_min_p(va_list *ap, int p);
int my_putnbr_base_min_p(va_list *ap, int p);
int my_put_scient_min_p(va_list *ap, int p);
int my_putnbr_base_o_p(va_list *ap, int p);
int put_float_scient_p(va_list *ap, int p);
int my_putnbr_base_p(va_list *ap, int p);
int my_put_scient_p(va_list *ap, int p);
int my_putfloat_p(va_list *ap, int p);
int my_put_unbr_p(va_list *ap, int p);
int my_putchar_p(va_list *ap, int p);
int my_put_nbr_p(va_list *ap, int p);
int my_putstr_p(va_list *ap, int p);

int my_dputnbr_base_min(int fd, long long nbr, int base);
int my_dput_scient_min_pos(int fd, double f, int n);
int dput_float_scient_min(int fd, float f, int m);
int my_dprintf(int fd, const char *format, ...);
int my_dput_scient_pos(int fd, double f, int n);
int my_dput_scient_min(int fd, double f, int n);
int my_dputstr(int fd, char const *str, int p);
int my_dputnbr_base(int fd, int nbr, int base);
int dput_float_scient(int fd, float f, int m);
void my_dpointer(int fd, long long adresse);
int my_dput_scient(int fd, double f, int n);
int my_dput_unbr(int fd, unsigned int nb);
int my_dputfloat(int fd, float f, int n);
void my_dputchar(int fd, char c);
int my_dput_nbr(int fd, int nb);

int dput_float_scient_min_p(int fd, va_list *ap, int p);
int my_dputnbr_base_min_p(int fd, va_list *ap, int p);
int my_dput_scient_min_p(int fd, va_list *ap, int p);
int my_dputnbr_base_o_p(int fd, va_list *ap, int p);
int my_dputnbr_base_b_p(int fd, va_list *ap, int p);
int dput_float_scient_p(int fd, va_list *ap, int p);
int my_dputnbr_base_p(int fd, va_list *ap, int p);
int my_dput_scient_p(int fd, va_list *ap, int p);
int my_dputfloat_p(int fd, va_list *ap, int p);
int my_dput_unbr_p(int fd, va_list *ap, int p);
int my_dpointer_p(int fd, va_list *ap, int p);
int my_dputchar_p(int fd, va_list *ap, int p);
int my_dput_nbr_p(int fd, va_list *ap, int p);
int my_dputstr_p(int fd, va_list *ap, int p);

#endif
