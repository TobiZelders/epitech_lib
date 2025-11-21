/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"
#include "printf.h"
#include <stdarg.h>

int p_adress(void *adress)
{
    int printed = 0;
    unsigned long int hex = (unsigned long int)adress;

    my_putstr("0x");
    printed = p_hexadecimal(hex, 0, 'x');
    return printed + 2;
}

int conv_p(va_list list)
{
    void *addr = va_arg(list, void *);

    return p_adress(addr);
}
