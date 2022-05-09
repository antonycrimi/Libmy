/*
** EPITECH PROJECT
** LibC
** File description:
** my_strncat.c
*/

#include "libmy.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int lenght = my_strlen(dest);

    for (; i < nb && src[i] != '\0'; i++)
        dest[lenght + i] = src[i];
    dest[lenght + i] = '\0';
    return dest;
}