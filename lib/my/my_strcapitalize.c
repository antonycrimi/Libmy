/*
** EPITECH PROJECT
** LibC
** File description:
** my_strcapitalize.c
*/

#include "libmy.h"

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
            str[0] -= ' ';    
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ' ';
        if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i - 1] >= ' ' && str[i - 1] < '0') || (str[i - 1] > '9' && str[i - 1] < 'A')))
            str[i] -= ' ';   
    }
    return str;
}