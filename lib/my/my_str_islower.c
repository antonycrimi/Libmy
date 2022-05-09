/*
** EPITECH PROJECT
** LibC
** File description:
** my_str_islower.c
*/

#include "libmy.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            return 1;
    return 0;
}
