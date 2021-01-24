/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** returns a number sent to the function as a string
*/

#include <stdio.h>

static int recup_power (int nb, int p)
{
    int result = 0;
    if (p == 0){
        result = 1;
        return (1);
    }else  if (p == 1){
        return (nb);
    }else {
        if (p < 0){
            return (0);
        }else{
            result = 1;
            return (nb * recup_power(nb, p-1));
        }
    }
    return (result);
}

static int get_digits(char const *str)
{
    int nbdigits = 0;
    int i = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9' &&
            !(str[i + 2] >= '0' && str[i] <= '9')) {
            nbdigits++;
        }
    }
    return (nbdigits);
}

int my_getnbr(char const *str)
{
    int digits = get_digits(str);
    int power = recup_power(10, (digits -1));
    int i = 0;
    int j = 0;
    int nb = 0;
    int transform = 0;
    int sign = 1;
    for (j = 0; str[j] == '-' || str[j] == '+'; j++) {
        if (str[j] == '-') {
            sign = sign * (-1);
        }
    }
    for (;str[j] >= '0' && str[j] <= '9'; j++) {
        transform = str[j] - 48;
        nb = nb + transform * power;
        power = power/10;
    }
    nb = nb * sign;
    return (nb);
}