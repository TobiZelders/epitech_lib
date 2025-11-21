/*
** EPITECH PROJECT, 2025
** Mini_printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"
#include <stdarg.h>

int length_int(int nb)
{
    int divider = 1;
    int count = 1;

    if (nb < 0){
        nb = -nb;
        count++;
    }
    while (nb / divider >= 10){
        divider = divider * 10;
        count++;
    }
    return count;
}

int conv_d_i(va_list list)
{
    int nbr = va_arg(list, int);

    my_put_nbr(nbr);
    return length_int(nbr);
}
