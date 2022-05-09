/*
** EPITECH PROJECT
** LibC
** File description:
** my_strcat.c
*/

#include "libmy.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int lenght = my_strlen(dest);

    for (; src[i] != '\0'; i++)
        dest[lenght + i] = src[i];
    dest[lenght + i] = '\0';
    return dest;
}