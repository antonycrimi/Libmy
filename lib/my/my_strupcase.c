/*
** EPITECH PROJECT
** LibC
** File description:
** my_strupcase
*/

#include "libmy.h"

char *my_strupcase(char *str)
{
    int length = my_strlen(str);

    for (int i = 0; i < length; i++)
        str[i] -= ' ';
    return str;
}