/*
** EPITECH PROJECT
** LibC
** File description:
** my_getnbr.c
*/

#include "libmy.h"

int my_getnbr(char const *str)
{
    int max[2] = {2147483647, -2147483648};
    long nbr[2] = {1, 0};
    int count = 0;

    while (str[count] == '-' || str[count] == '+') {
        (str[count] == '-') ? nbr[0] *= -1: nbr[0];
        count++;
    }
    while (str[count] >= '0' && str[count] <= '9') {
        nbr[1] = nbr[1] * 10 + (str[count] - '0');
        count++;
        if (nbr[1] > max[0] || nbr[1] < max[1])
            return 0;
    }
    return (nbr[0] * nbr[1]);
}