/*
** EPITECH PROJECT, 2025
** Mini_printf
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "printf.h"
#include "my.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

conv_func_t **malloc_conv_arr(int size)
{
    conv_func_t **conv_func_arr;
    conv_func_t *conv_struct;

    conv_func_arr = malloc(sizeof(conv_func_t *) * (size + 1));
    for (int i = 0; i < size; i++) {
        conv_struct = malloc(sizeof(conv_func_t));
        conv_func_arr[i] = conv_struct;
    }
    conv_func_arr[size] = NULL;
    return conv_func_arr;
}

void free_conv_arr(conv_func_t **conv_func_arr)
{
    for (int i = 0; conv_func_arr[i] != NULL; i++) {
        free(conv_func_arr[i]);
    }
    free(conv_func_arr);
}

conv_func_t **init_conv_func_arr(void)
{
    char conv_arr[14] = { 'd', 'i', 's', 'c', '%', 'e', 'E',
        'o', 'u', 'x', 'X', 'p', 'f', '\0'};
    int (*func_arr[14]) (va_list) = { &conv_d_i, &conv_d_i,
        &conv_s, &conv_c, &conv_percent, &conv_e, &conv_e_caps,
        &conv_o, &conv_u, &conv_x, &conv_x_caps, &conv_p,
        &conv_f, NULL };
    conv_func_t **conv_func_arr = malloc_conv_arr(13);

    for (int i = 0; i < 13; i++) {
        conv_func_arr[i]->conv = conv_arr[i];
        conv_func_arr[i]->fptr = func_arr[i];
    }
    return conv_func_arr;
}
