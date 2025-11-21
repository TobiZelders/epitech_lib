/*
** EPITECH PROJECT, 2025
** printf
** File description:
** Header file for my_printf and associated functions
*/

#ifndef PRINTF_H_
    #define PRINTF_H_
    #include <stdarg.h>

typedef struct conv_func {
    char conv;
    int (*fptr)(va_list);
} conv_func_t;

int conv_d_i(va_list list);
int conv_s(va_list list);
int conv_c(va_list list);
int conv_e(va_list list);
int conv_e_caps(va_list list);
int conv_o(va_list list);
int conv_u(va_list list);
int conv_x(va_list list);
int conv_x_caps(va_list list);
int conv_p(va_list list);
int conv_f(va_list list);
int conv_percent(va_list list);
conv_func_t **init_conv_func_arr(void);
conv_func_t **malloc_conv_func_arr(int);
void free_conv_arr(conv_func_t **);
int p_hexadecimal(unsigned long int nb, int printed, char c);
int my_printf(char const *format, ...);
#endif
