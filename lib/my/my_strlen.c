/*
** EPITECH PROJECT, 2025
** Day 04, task03
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != 0){
        i++;
    }
    return i;
}
