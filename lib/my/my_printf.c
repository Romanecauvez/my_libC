/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** mini_printf
*/

#include "my.h"

int functions_pointers(va_list *ap, char c, int precison)
{
    char *flags = "sdicoxXufFeEgG";
    int (*ptr_f[15])(va_list *, int) = {&my_putstr_p, &my_put_nbr_p,
    &my_put_nbr_p, &my_putchar_p, &my_putnbr_base_o_p, &my_putnbr_base_min_p,
    &my_putnbr_base_p, &my_put_unbr_p, &my_putfloat_p, &my_putfloat_p,
    &my_put_scient_min_p, &my_put_scient_p, &put_float_scient_min_p,
    &put_float_scient_p};

    for (int i = 0; flags[i]; i++) {
        if (flags[i] == c)
            return ptr_f[i](ap, precison);
    }
    my_putchar('%');
    return 0;
}

int count_space(char *str)
{
    int i = 0;

    while (str[i] == ' ')
        i++;
    return i;
}

static int verif_space(va_list *ap, char *flags)
{
    int i = count_space(flags);
    char flag = '\0';
    int precision = -1;

    if (i > 0)
        my_putchar(' ');
    if (flags[i] == '.' && flags[i + 1]) {
        precision = my_getnbr(&flags[i + 1]);
        if (flags[i + 2])
            i += 2;
        else
            return i;
    }
    flag = flags[my_strlen(flags) - 1];
    functions_pointers(ap, flag, precision);
    return i;
}

int is_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    return 0;
}

char *cut_format(char *begining_of_flag)
{
    char *result = NULL;
    int i = 0;

    for (; !is_alpha(begining_of_flag[i]) &&
        begining_of_flag[i] != '%'; i++);
    result = malloc(sizeof(char) * (i + 2));
    result = my_strncpy(result, begining_of_flag, i + 1);
    result[i + 1] = '\0';
    return result;
}

int my_printf(const char *format, ...)
{
    va_list ap;
    char *flag_all = NULL;

    if (!format)
        return 84;
    va_start(ap, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%' && format[i + 1]) {
            i++;
            flag_all = cut_format((char *)&format[i]);
            i += verif_space(&ap, flag_all);
            free(flag_all);
        } else
            my_putchar(format[i]);
    }
    va_end(ap);
    return 0;
}
