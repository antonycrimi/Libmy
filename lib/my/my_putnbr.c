/*
** EPITECH PROJECT
** LibC
** File description:
** my_putnbr.c
*/

#include "libmy.h"

int my_putnbr(int nb)
{
    long int i = 1;
    long int number = nb;

    if (nb < 0) {
        my_putchar('-');
        number = -number;
        }
    while ((number / i) > 9) {
        i = i * 10;
    }
    while (i != 0) {
        my_putchar('0' + (number / i) % 10);
        i = i / 10;
    }
    return 0;
}