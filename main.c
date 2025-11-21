/*
** EPITECH PROJECT, 2025
** printf
** File description:
** Header file for my_printf and associated functions
*/

#include "my.h"
#include "printf.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    char *str = "hello";
    my_printf("%s, %o, %p, %x, %i, %f.6", "Hello", 123.000, 
    &str, 1020, 1, 123.00);

printf("Hello\n");
    printf("%s", "Hello");
    printf("%d", 42);
    printf("%s%d", "42", 42);
    return 0;
}
