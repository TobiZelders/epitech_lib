/*
** EPITECH PROJECT, 2025
** Day 05, task05
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_compute_square_root(int nb)
{
    int result;

    if (nb < 0) {
        return 0;
    }
    for (int i = nb; i > 0; i--){
        if (my_compute_power_rec(i, 2) == nb){
            return i;
        }
    }
    return 0;
}
