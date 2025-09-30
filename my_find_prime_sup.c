/*
** EPITECH PROJECT, 2025
** Day 05, task07
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_find_prime_sup(int nb)
{
    while (1) {
        if (my_is_prime(nb)){
            return nb;
        }
        nb++;
    }
}
