/*
** EPITECH PROJECT
** LibC
** File description:
** my_strstr.c
*/

#include "libmy.h"

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[0])
            return (str);
        i++;
    }
    return 0;
}