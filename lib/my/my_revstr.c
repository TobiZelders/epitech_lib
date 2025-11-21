/*
** EPITECH PROJECT, 2025
** printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int len = my_strlen(str);
    char tmp;

    while (i < len / 2) {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
        i++;
    }
    str[len] = '\0';
    return str;
}
