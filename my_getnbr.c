/*
** EPITECH PROJECT, 2025
** Day 04, task05
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/
#include <stdio.h>

void my_putchar(char c);

int check_int(char c)
{
    if (c >= 48 && c <= 57){
        return 1;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int result;
    int temp;
    int nbr_end = 0;
    int nbr_count = 0;

    while (str[i] != 0){
        if (check_int(str[i]) == 1){
            nbr_count++;
            nbr_end = 1;
            temp = str[i] - 48;
            result = result * 10 + temp;
        } else {
            nbr_end = 0;
        }
        if (nbr_end == 0 && nbr_count > 0){
            result = result;
            return result;
        }
        i++;
    }
    return 0;
}
