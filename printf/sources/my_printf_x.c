/*
** EPITECH PROJECT, 2020
** my_printf_x.c
** File description:
** print hexadecimal lowercase
*/

#include "../includes/my.h"
#include "../includes/my_printf.h"
#include <stdarg.h>

void my_printf_x(va_list *arglist)
{
    int x = va_arg(*arglist, int);
    char *str = decimal_to_hexad(x);

    my_putstr(my_strlowcase(str));
}
