/*
** EPITECH PROJECT
** LibC
** File description:
** my_strlowcase.c 
*/

#include "libmy.h"

char *my_strlowcase(char *str)
{
    int length = my_strlen(str);

    for (int i = 0; i < length; i++)
        str[i] += ' ';
    return str;
}