/*
** EPITECH PROJECT
** LibC 
** File description:
** my_str_isprintable.c
*/

#include "libmy.h"

int my_str_isprintable(char const *str)
{
    if (my_strlen(str) == 0)
        return 1;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= ' ' && str[i] <= '~')
            return 1;
    return 0;
}