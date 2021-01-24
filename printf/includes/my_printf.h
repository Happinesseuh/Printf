/*
** EPITECH PROJECT, 2020
** my_printf.h
** File description:
** files including prototypes
*/
#include <stdarg.h>

#ifndef MY_PRINTF_H
#define MY_PRINTF_H

void my_printf_c(va_list *arglist);
void my_printf_s(va_list *arglist);
void my_printf_d(va_list *arglist);
int decimal_to_octal (int d);
void my_printf_o(va_list *arglist);
char *decimal_to_hexad (unsigned int d);
void my_printf_up_x(va_list *arglist);
void my_printf_x(va_list *arglist);
int my_put_unsigned_int (unsigned int nb);
void my_printf_u(va_list *arglist);
void my_printf_p(va_list *arglist);
void my_printf_n(va_list *arglist);
void my_printf_up_s(va_list *arglist);
void my_printf_b(va_list *arglist);
void my_printf_pourcent(va_list *arglist);
int unsigned_nb_to_binary(int nb);
void my_printf_b(va_list *arglist);
char *decimal_to_longhexad (unsigned long int d);
void my_printf_p(va_list *arglist);
void no_printable_to_octal(char c);

#endif
