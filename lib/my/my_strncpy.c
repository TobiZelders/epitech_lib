/*
** EPITECH PROJECT, 2025
** Day 07, task02
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++){
        dest[i] = src[i];
    }
    return dest;
}
