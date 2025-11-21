/*
** EPITECH PROJECT, 2025
** printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdarg.h>
#include "my.h"

static int count_digits(int nb)
{
    int digits = 0;

    while (nb != 0) {
        nb = nb / 10;
        digits++;
    }
    return digits;
}

static int my_print_float(double nb)
{
    int precision = 0;
    int max_precision = 6;
    int printed = count_digits((int)nb);

    my_put_nbr((int)nb);
    my_putchar('.');
    nb = nb - (int)nb;
    while (nb != 0.0f && precision != max_precision) {
        nb = nb * 10;
        my_put_nbr((int)nb);
        nb = nb - (int)nb;
        precision++;
        printed++;
    }
    return printed + 1;
}

static int count_fdigits(double nb)
{
    int max_precision = 6;
    int precision = 0;
    int dec_digits = 0;
    int digits = count_digits((int)nb);

    nb = nb - (int)nb;
    while (nb != 0.0f && precision != max_precision) {
        nb = nb * 10;
        nb = nb - (int)nb;
        precision++;
        dec_digits++;
    }
    return digits + dec_digits + 1;
}

static int p_float(double nb, int times)
{
    int printed = count_fdigits(nb) + count_digits(times);
    char sign = '+';

    if (times < 0) {
        sign = '-';
        times = times * -1;
    }
    if (times < -9 || times > 9) {
        my_print_float(nb);
        my_putchar('E');
        my_putchar(sign);
        my_put_nbr(times);
        return printed + 2;
    }
    my_print_float(nb);
    my_putchar('e');
    my_putchar(sign);
    my_putchar('0');
    my_put_nbr(times);
    return printed + 3;
}

static int sc_neg(double nb)
{
    int times = 0;
    int non_zero = nb;
    int printed;

    while (non_zero < 1) {
        nb = nb * 10;
        non_zero = nb;
        times--;
    }
    printed = p_float(nb, times);
    return printed;
}

static int sc_pos(double nb)
{
    int times = 0;
    int non_zero = nb;
    int printed;

    while (non_zero >= 10) {
        nb = nb / 10;
        non_zero = nb;
        times++;
    }
    printed = p_float(nb, times);
    return printed;
}

static int sc_notation(double nb)
{
    int printed;

    if (nb > 10.f) {
        printed = sc_pos(nb);
        return printed;
    }
    if (nb < 1) {
        printed = sc_neg(nb);
        return printed;
    }
    printed = p_float(nb, 0);
    return printed;
}

int conv_e_caps(va_list list)
{
    double dbl = va_arg(list, double);

    return sc_notation(dbl);
}
