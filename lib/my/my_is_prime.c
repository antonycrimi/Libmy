/*
** EPITECH PROJECT
** LibC
** File description:
** my_is_prime.c
*/

#include "libmy.h"

int my_is_prime(int nb)
{
    int i = 2;
    if (nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    while (i < nb) {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}