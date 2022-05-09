/*
** EPITECH PROJECT
** LibC
** File description:
** my_str_isalpha.c
*/

#include "libmy.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'z')
            return 1;
    return 0;
}