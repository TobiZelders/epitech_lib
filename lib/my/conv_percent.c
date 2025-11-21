/*
** EPITECH PROJECT, 2025
** printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdarg.h>
#include "my.h"

int conv_percent(va_list list)
{
    my_putchar('%');
    return 1;
}
