/*
** EPITECH PROJECT, 2020
** my_printf_S.c
** File description:
** print string printable
*/

#include "../includes/my.h"
#include "../includes/my_printf.h"
#include <stdarg.h>

void no_printable_to_octal(char c)
{
    char str[5] = {'0', '0', '0', '\\', '\0'};

    for (int i = 0 ; c != 0 ; i++) {
        str[i] = (c % 8) + '0';
        c /= 8;
    }
    for (int i = 3; i >= 0 ; i--)
        my_putchar(str[i]);
}

void my_printf_up_s(va_list *arglist)
{
    char *stack = va_arg(*arglist, char *);
    int sti = 0;

    for (int i = 0; stack[i] != '\0'; i++) {
        if (stack[i] >= 32 && stack[i] < 127)
            my_putchar(stack[i]);
        else
            no_printable_to_octal(stack[i]);
    }
}