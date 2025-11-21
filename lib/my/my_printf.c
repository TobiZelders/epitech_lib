/*
** EPITECH PROJECT, 2025
** Epitech
** File description:
** project.c
*/
#include "my.h"
#include "printf.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int check(char const *format, int index, va_list list)
{
    int i = 0;
    int count = 0;
    char conv = format[index];
    conv_func_t **conv_func_arr = init_conv_func_arr();

    while (conv_func_arr[i] != NULL) {
        if (conv == conv_func_arr[i]->conv) {
            count = conv_func_arr[i]->fptr(list);
        }
        i++;
    }
    free_conv_arr(conv_func_arr);
    return count;
}

int my_printf(char const *format, ...)
{
    int i = 0;
    va_list list;
    int printed;
    int count;

    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            printed = check(format, i, list);
        } else {
            my_putchar(format[i]);
            count++;
        }
        count = count + printed;
        i++;
    }
    va_end(list);
    return count;
}
