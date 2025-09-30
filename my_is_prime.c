/*
** EPITECH PROJECT, 2025
** Day 05, task06
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_is_prime(int nb)
{
    int factors = 0;

    if (nb <= 0) {
        return 0;
    }
    for (int i = nb; i > 0; i--){
        if (nb % i == 0){
            factors++;
        }
    }
    if (factors == 2) {
        return 1;
    }
    return 0;
}
