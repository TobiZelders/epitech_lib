/*
** EPITECH PROJECT, 2025
** Day 06, task03
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

char *my_revstr(char *str)
{
    const int len_str = my_strlen(str);
    char copy;

    for (int i = 0; i < my_strlen(str) / 2; i++){
        copy = str[i];
        str[i] = str[len_str - 1 - i];
        str[len_str - 1 - i] = copy;
    }
    return str;
}
