/*
** EPITECH PROJECT, 2025
** Day 06, task01
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; i < my_strlen(dest); i++){
        dest[i] = src[i];
    }
    return dest;
}
