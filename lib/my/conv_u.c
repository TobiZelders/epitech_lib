/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdarg.h>
#include "my.h"

int my_put_lnbr(long int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_lnbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    return 0;
}

int count_ldigits(long int nb)
{
    int digits = 0;

    while (nb != 0) {
        nb = nb / 10;
        digits++;
    }
    return digits;
}

int p_unsigned(unsigned int nb)
{
    long int i = nb;
    int digits = count_ldigits(nb);

    my_put_lnbr(i);
    return digits;
}

int conv_u(va_list list)
{
    unsigned int unint = va_arg(list, unsigned int);

    return p_unsigned(unint);
}
