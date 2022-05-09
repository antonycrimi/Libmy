/*
** EPITECH PROJECT
** LibC
** File description:
** my_evil_str.c
*/

#include "libmy.h"

char *my_evil_str(char *str)
{
    char temp;
    int idx;
    int lenght;

    idx = 0;
    lenght = my_strlen(str) - 1;
    while (idx <= lenght / 2)
    {
        temp = str[idx];
        str[idx] = str[lenght - idx];
        str[lenght - idx] = temp;
        idx += 1;
    }
    return (str);
}