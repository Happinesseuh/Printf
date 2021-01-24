/*
** EPITECH PROJECT, 2020
** my_printf_d_i.c
** File description:
** print int
*/

#include "../includes/my.h"
#include <stdarg.h>

void my_printf_d(va_list *arglist)
{
    int d = va_arg(*arglist, int);
    my_put_nbr(d);
}