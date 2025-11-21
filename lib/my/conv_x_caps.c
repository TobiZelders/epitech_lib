/*
** EPITECH PROJECT, 2025
** Day 08, task02
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"
#include <stdarg.h>

char find_letter_caps(int remainder, char c)
{
    int i = 10;
    int ascii = 0;

    while (i != remainder) {
        ascii++;
        i++;
    }
    return 65 + ascii;
}

int p_hexadecimal_caps(unsigned long int nb, int printed, char c)
{
    int remainder = nb % 16;

    if (nb >= 10)
        printed = p_hexadecimal_caps(nb / 16, printed, c);
    if (remainder >= 10 && remainder <= 16) {
        my_putchar(find_letter_caps(remainder, c));
    } else {
        my_putchar(remainder + '0');
    }
    return printed + 1;
}

int conv_x_caps(va_list list)
{
    unsigned long int unlong = va_arg(list, unsigned long int);

    return p_hexadecimal_caps(unlong, 0, 'X');
}
