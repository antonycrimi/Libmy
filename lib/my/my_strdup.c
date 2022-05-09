/*
** EPITECH PROJECT
** LibC
** File description:
** my_strdup.c
*/

#include "libmy.h"

char *my_strdup(char const *src)
{
    int length = my_strlen(src);
    char *dup = malloc(sizeof(char) * length);

    if (dup == NULL)
        return NULL;
    dup = my_strcpy(dup, src);
    dup[length] = '\0';
    return dup;
}