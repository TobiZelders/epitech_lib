/*
** EPITECH PROJECT, 2025
** Day 06, task01
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != 0){
        i++;
    }
    return i;
}
char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; i < my_strlen(dest); i++){
        dest[i] = src[i];
    }
    return dest;
}
int main(void)
{
    char dest[] = "hello";
    char src[] = "world";
    my_strcpy(dest, src);
    return 0;
}
