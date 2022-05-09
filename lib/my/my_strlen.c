/*
** EPITECH PROJECT
** LibC
** File description:
** my_strlen.c
*/

#include "libmy.h"

int my_strlen(char const *str)
{
    int lenght = 0;
    for (int i = 0; str[i] != '\0'; i++)
        lenght = i + 1;
    return lenght;
}