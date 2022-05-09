/*
** EPITECH PROJECT
** LibC
** File description:
** my_strcpy.c
*/

#include "libmy.h"

char *my_strcpy(char *dest, char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        dest[i] = str[i];
    dest[i] = '\0';
    return dest;
}