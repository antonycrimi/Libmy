/*
** EPITECH PROJECT
** LibC
** File description:
** my_strncpy.c
*/

#include "libmy.h"

char *my_strncpy(char *dest, char const *str, int n)
{
    int i;

    for (i = 0; i < n && str[i] != '\0'; i++)
        dest[i] = str[i];
    return dest;
}
