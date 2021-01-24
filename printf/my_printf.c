/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** write some types
*/

#include "./includes/my_printf.h"
#include "./includes/my.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);

int my_putstr(char const *str);

void choose_flag(va_list *arglist, char c)
{

    void (*flag[128])(va_list *arglist);

    flag['c'] = &my_printf_c;
    flag['s'] = &my_printf_s;
    flag['d'] = &my_printf_d;
    flag['i'] = &my_printf_d;
    flag['o'] = &my_printf_o;
    flag['X'] = &my_printf_up_x;
    flag['x'] = &my_printf_x;
    flag['u'] = &my_printf_u;
    flag['p'] = &my_printf_p;
    flag['S'] = &my_printf_up_s;
    flag['b'] = &my_printf_b;
    flag['%'] = &my_printf_pourcent;
    flag[c](arglist);
}

int check_flag(char c)
{
    char *flag = "csdioXxupSb%#";

    for (int i = 0; flag[i] != '\0'; i++)
        if (c == flag[i])
            return 1;
    return 0;
}

void print_padding_hashtag(char c)
{
    switch (c) {
        case 'o':
            my_putchar('0');
            break;
        case 'x':
            my_putstr("0x");
            break;
        case 'X':
            my_putstr("0X");
            break;
    }
}

void padding_hashtag(char *format, int *i, va_list *arglist)
{
    if (format[*i] == '#' && check_flag(format[*i + 1]) &&
        format[*i + 1] != '#') {
        print_padding_hashtag(format[*i + 1]);
        choose_flag(arglist, format[*i + 1]);
    }
    *i += 1;
}

int my_printf(char *format, ...)
{
    va_list arglist;

    va_start(arglist, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && check_flag(format[i + 1]) ) {
            if (format[i + 1] == '#') {
                i++;
                padding_hashtag(format, &i, &arglist);
            } else
                choose_flag(&arglist, format[i++ + 1]);
        } else
            write(1, &format[i], 1);

    }
    va_end(arglist);
}