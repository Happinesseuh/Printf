/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** display int
*/

#include <unistd.h>
#include "../../includes/my.h"

int my_put_nbr (int nb)
{
    int i = nb;
    int mod = 0;
    int mult = 1;
    if (nb == -2147483648) {
        my_putstr("-2147483648");
    }else if (nb < 0) {
            nb = -nb;
            i = -i;
            my_putchar('-');
        }
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
