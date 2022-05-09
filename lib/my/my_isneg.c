/*
** EPITECH PROJECT
** LibC
** File description:
** my_isneg.c
*/

#include "libmy.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    my_putchar('\n');
    return 0;
}