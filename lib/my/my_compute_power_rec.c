/*
** EPITECH PROJECT
** LibC
** File description:
** my_compute_power_rec.c
*/

#include "libmy.h"

int my_compute_power_rec(int nb, int p)
{
	if (p > 0)
		nb *= my_compute_power_rec(nb, p - 1);
	else
		return (1);
	return (nb);
}
