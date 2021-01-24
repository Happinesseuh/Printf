/*
** EPITECH PROJECT, 2020
** my_printf_c
** File description:
** print char
*/

#include "../includes/my.h"
#include <unistd.h>
#include <stdarg.h>

void my_printf_c(va_list *arglist)
{
    char c = va_arg(*arglist, int);

    write(1, &c, 1);
}