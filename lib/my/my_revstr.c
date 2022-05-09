/*
** EPITECH PROJECT
** LibC
** File description:
** my_revstr.c
*/

#include "libmy.h"

char *my_revstr(char *str)
{
    char c;
    int j = 0;

    j = my_strlen(str) - 1;
    for (int i = 0; i <= j; i++) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        j--;
    }
    return (str);
}