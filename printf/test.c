/*
** EPITECH PROJECT, 2020
** test.c
** File description:
** file for test my_printf.c
*/

#include "./includes/my.h"
#include "./includes/my_printf.h"

int my_printf(char *format, ...);

int main(void)
{
    my_printf("%w\n", 12);
    printf("%w\n", 12);
    return (0);
}