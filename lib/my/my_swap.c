/*
** EPITECH PROJECT
** LibC
** File description:
** my_swap.c
*/

#include "libmy.h"

void my_swap(int *a, int *b)
{
    int buf = *a;
    *a = *b;
    *b = buf;
}