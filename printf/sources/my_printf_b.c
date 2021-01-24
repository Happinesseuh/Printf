/*
** EPITECH PROJECT, 2020
** my_printf_b.c
** File description:
** print flag b
*/

#include "../includes/my.h"
#include <unistd.h>
#include <stdarg.h>

int unsigned_nb_to_binary(int nb)
{
    int rest = 0;
    int result[32];
    int i = 0;

    for (; nb > 0; i++)
    {
        result[i] = nb % 2;
        nb /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(result[j]);
    }
}

void my_printf_b(va_list *arglist)
{
    unsigned int b = va_arg(*arglist, int);

    unsigned_nb_to_binary(b);
}