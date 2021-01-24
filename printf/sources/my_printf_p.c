/*
** EPITECH PROJECT, 2020
** my_printf_p.c
** File description:
** print adress
*/

#include "../includes/my.h"
#include "../includes/my_printf.h"
#include <stdarg.h>
#include <stdlib.h>

char * decimal_to_longhexad(unsigned long int d)
{
    char *hexad = malloc(17);
    char *result = malloc(17);
    int i = 0;
    int rest = 0;
    for (; d != 0; i++, d /= 16) {
        rest = d % 16;
        if (rest < 10)
            hexad[i] = rest + '0';
        else
            hexad[i] = rest + 'a' - 10;
}
    hexad[i] = '\0';
    my_revstr(hexad);
    return (hexad);
}

void my_printf_p(va_list *arglist)
{
    unsigned long int p = va_arg(*arglist, unsigned long int);
    if (p == 0)
        my_putstr("(nil)");
    else {
        my_putstr("0x");
        my_putstr(decimal_to_longhexad(p));
    }
}