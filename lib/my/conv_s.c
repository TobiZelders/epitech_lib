/*
** EPITECH PROJECT, 2025
** printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include <stdarg.h>
#include "my.h"

int conv_s(va_list list)
{
    char *str = va_arg(list, char *);

    my_putstr(str);
    return my_strlen(str);
}
