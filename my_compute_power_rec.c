/*
** EPITECH PROJECT, 2025
** Day 05, task04
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    } else if (p == 1){
        return nb;
    } else {
        return nb * my_compute_power_rec(nb, p - 1);
    }
}
