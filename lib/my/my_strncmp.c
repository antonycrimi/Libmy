/*
** EPITECH PROJECT
** LibC
** File description:
** my_strncmp.c
*/

#include "libmy.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = my_strlen(s1);
    int b = my_strlen(s2);
    
    for (int i = 0; i < n; i++) {
        if (i == a && i == b)
            break;
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    return 0;
}