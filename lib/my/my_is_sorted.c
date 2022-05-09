/*
** EPITECH PROJECT
** LibC
** File description:
** my_is_sorted.c
*/

#include "libmy.h"

bool my_is_sorted(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i != size - 1)
        {
            if (array[i] > array[i+1])
                return false;
        }
    }
    return true;
}