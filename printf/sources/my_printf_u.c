/*
** EPITECH PROJECT, 2020
** my_printf_u.c
** File description:
** print unsigned int
*/

#include "../includes/my.h"
#include "../includes/my_printf.h"
#include <stdarg.h>

int my_put_unsigned_int(unsigned int nb)
{
    unsigned int i = nb;
    unsigned int mod = 0;
    unsigned int mult = 1;

    while (nb >= 10) {
        mult = mult * 10;
        nb = nb / 10;
    }
    while (mult > 0) {
        mod = (i / mult) % 10;
        my_putchar(mod + 48);
        mult = mult / 10;
    }
    return (0);
}

void my_printf_u(va_list *arglist)
{
    int u = va_arg(*arglist, int);

    my_put_unsigned_int(u);
}
