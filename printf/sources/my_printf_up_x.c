/*
** EPITECH PROJECT, 2020
** my_printf_X.c
** File description:
** print hexadecimal
*/

#include "../includes/my.h"
#include "../includes/my_printf.h"
#include <stdarg.h>
#include <stdlib.h>

char * decimal_to_hexad(unsigned int d)
{
    char *hexad = malloc(17);
    char *result = malloc(sizeof(char) * 17);
    int i = 0;
    int rest = 0;
    for (; d != 0; i++, d /= 16) {
        rest = d % 16;
        if (rest < 10)
            hexad[i] = rest + 48;
        else
            hexad[i] = rest + 55;
}
    hexad[i] = '\0';
    my_revstr(hexad);
    return (hexad);
}

void my_printf_up_x(va_list *arglist)
{
    int x = va_arg(*arglist, int);
    char *str = decimal_to_hexad(x);

    my_putstr(str);
}