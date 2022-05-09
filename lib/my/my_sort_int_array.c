/*
** EPITECH PROJECT
** LibC
** File description:
** my_sort_int_array.c
*/

#include "libmy.h"

void my_sort_int_array(int *array, int size)
{
    bool sorted = my_is_sorted(array, size);
    int i = 0;

    while (!sorted)
    {
        if (i == size)
            i = 0;
        if (i != size - 1)
        {
            if (array[i] > array[i+1])
                my_swap(&array[i], &array[i+1]);
        }
        sorted = my_is_sorted(array, size);
        i++;
    }
}