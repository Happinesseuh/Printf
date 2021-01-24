/*
** EPITECH PROJECT, 2020
** tests_disp_stdarg.c
** File description:
** units tests for disp stdarg
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include "../includes/bsprintf.h"

Test(disp_stdarg, basic, .init = cr_redirect_stdout)
{
    disp_stdarg("csiis", 'X', "hi", 10,  -3, "plop");
    cr_assert_stdout_eq_str("X\nhi\n10\n-3\nplop\n");
}
