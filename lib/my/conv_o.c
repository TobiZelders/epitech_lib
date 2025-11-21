/*
** EPITECH PROJECT, 2025
** printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"

int count_odigits(unsigned int nb)
{
    int i = 0;

    while (nb != 0) {
        nb = nb / 8;
        i++;
    }
    return i;
}

int print_octal(unsigned int nb)
{
    int i = 0;
    char residue;
    int size = count_odigits(nb);
    char *str = malloc(sizeof(char) * size + 1);

    while (i < size) {
        residue = nb % 8 + '0';
        nb = nb / 8;
        str[i] = residue;
        i++;
    }
    str[i] = '\0';
    str = my_revstr(str);
    my_putstr(str);
    free(str);
    return size;
}

int conv_o(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);

    return print_octal(nb);
}
