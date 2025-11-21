/*
** EPITECH PROJECT, 2025
** Day 03, task07
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

int check_length(int nb)
{
    int divider = 1;

    if (nb < 0){
        nb = -nb;
    }
    while (nb / divider >= 10){
        divider = divider * 10;
    }
    return divider;
}

int my_put_nbr(int nb)
{
    int temp;
    int size = check_length(nb);

    if (nb < 0){
        my_putchar('-');
        nb = -nb;
    }
    while (size > 0){
        temp = nb / size;
        my_putchar(temp + '0');
        nb = nb % size;
        size = size / 10;
    }
    return 0;
}
