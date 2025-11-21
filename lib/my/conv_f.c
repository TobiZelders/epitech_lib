/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"
#include <stdarg.h>
#include <stddef.h>

static int count_digits_f(int nb)
{
    int digits = 0;

    while (nb != 0) {
        nb = nb / 10;
        digits++;
    }
    return digits;
}

static int handle_scprecision(int *precision)
{
    if (precision == NULL)
        return 6;
    return *precision;
}

int handle_precision(int *precision)
{
    if (precision == NULL)
        return 6;
    if (*precision == 0)
        return 1;
    return *precision;
}

double respect_coding_style(double nb, int precision,
    int max_precision)
{
    int rounded = 0;
    double cp = 0;

    nb = nb * 10.0;
    if (precision == max_precision - 1) {
        cp = nb;
        cp = cp - (int)cp;
        cp = cp * 10.0;
        if ((int)cp > 5) {
            rounded = (int)nb + 1;
            my_put_nbr(rounded);
            return 0;
        }
        my_put_nbr((int)nb);
        return nb - (int)nb;
    } else {
        my_put_nbr((int)nb);
        nb = nb - (int)nb;
    }
    return nb;
}

int my_print_float(double nb, int *pre)
{
    int precision = 0;
    int max_precision = handle_precision(pre);
    int printed = count_digits_f((int)nb);

    if (nb < 0) {
        my_putchar('-');
        printed++;
    }
    my_put_nbr((int)nb);
    my_putchar('.');
    nb = nb - (int)nb;
    while (nb != 0.0f && precision < max_precision) {
        nb = respect_coding_style(nb, precision, max_precision);
        precision++;
        printed++;
    }
    return printed + 1;
}

int conv_f(va_list list, char *str)
{
    double dbl = va_arg(list, double);

    return my_print_float(dbl, NULL);
}
