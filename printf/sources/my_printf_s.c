/*
** EPITECH PROJECT, 2020
** my_printf_s.c
** File description:
** print string
*/

#include "../includes/my.h"
#include "../includes/my_printf.h"
#include <stdarg.h>

void my_printf_s(va_list *arglist)
{
    char *s = va_arg(*arglist, char *);

    my_putstr(s);
}