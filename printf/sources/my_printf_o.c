/*
** EPITECH PROJECT, 2020
** my_printf_o.c
** File description:
** print octal
*/

#include "../includes/my.h"
#include <stdarg.h>
#include "../includes/my_printf.h"

int decimal_to_octal(int d)
{
    int o = 0;

    for (int i = 1; d != 0; i *= 10) {
        o += (d % 8) * i;
        d /= 8;
    }
    return o;
}

void my_printf_o(va_list *arglist)
{
    int o = va_arg(*arglist, int);

    my_put_nbr(decimal_to_octal(o));
}