/*
** EPITECH PROJECT, 2025
** Day 04, task02
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != 0){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
