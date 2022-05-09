/*
** EPITECH PROJECT
** LibC
** File description:
** my_compute_factorial_rec.c
*/

#include "libmy.h"

int my_compute_factorial_rec(int nb)
{
    if (nb == 0)
        return 1;
    return nb * my_compute_factorial_rec(nb - 1);
}