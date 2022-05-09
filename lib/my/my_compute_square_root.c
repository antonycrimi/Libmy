/*
** EPITECH PROJECT
** LibC
** File description:
** my_compute_square_root.c
*/

#include "libmy.h"

int my_compute_square_root(int nb)
{
    int i = 0;

	while (my_compute_power_rec(i, 2) < nb) {
		i++;
	}
	return (i);
}
