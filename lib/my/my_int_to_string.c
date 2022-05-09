/*
** EPITECH PROJECT
** LibC
** File description:
** my_int_to_string.c
*/

#include "libmy.h"

int give_size(int nb)
{
    int i = 1;
    while (nb > 0) {
        nb = nb / 10;
            i++;
    }
    return i;
}

char *my_int_to_string(int nb)
{
    char *buf = malloc(sizeof(char) * give_size(nb));
    int i = 0;

    while (nb > 0) {
        buf[i] = nb % 10;
        buf[i] = buf[i] + '0';
        nb = nb / 10;
        i++;
    }
    buf = my_revstr(buf);
    buf[i] = '\0';
    return buf;
}