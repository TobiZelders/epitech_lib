/*
** EPITECH PROJECT, 2025
** printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdarg.h>
#include "my.h"

int conv_c(va_list list)
{
    char chr = va_arg(list, int);

    my_putchar(chr);
    return 1;
}
