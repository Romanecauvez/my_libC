/*
** EPITECH PROJECT, 2024
** my_dprintf
** File description:
** my_dprintf
*/

#include "my.h"

int dfunctions_pointers(int fd, va_list *ap, char c, int precison)
{
    char *flags = "sdicoxXufFpeEgGb";
    int (*ptr_f[16])(int, va_list *, int) = {&my_dputstr_p, &my_dput_nbr_p,
    &my_dput_nbr_p, &my_dputchar_p, &my_dputnbr_base_o_p,
    &my_dputnbr_base_min_p, &my_dputnbr_base_p, &my_dput_unbr_p,
    &my_dputfloat_p, &my_dputfloat_p, &my_dpointer_p, &my_dput_scient_min_p,
    &my_dput_scient_p, &dput_float_scient_min_p, &dput_float_scient_p,
    &my_dputnbr_base_b_p};

    for (int i = 0; flags[i]; i++) {
        if (flags[i] == c)
            return ptr_f[i](fd, ap, precison);
    }
    my_dputchar(fd, '%');
    return 0;
}

static int dverif_space(int fd, va_list *ap, char *flags)
{
    int i = count_space(flags);
    char flag = '\0';
    int precision = -1;

    if (i > 0)
        my_dputchar(fd, ' ');
    if (flags[i] == '.' && flags[i + 1]) {
        precision = my_getnbr(&flags[i + 1]);
        if (flags[i + 2])
            i += 2;
        else
            return i;
    }
    flag = flags[my_strlen(flags) - 1];
    dfunctions_pointers(fd, ap, flag, precision);
    return i;
}

int my_dprintf(int fd, const char *format, ...)
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
            i += dverif_space(fd, &ap, flag_all);
            free(flag_all);
        } else
            my_dputchar(fd, format[i]);
    }
    va_end(ap);
    return 0;
}
