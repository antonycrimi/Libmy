/*
** EPITECH PROJECT
** LibC
** File description:
** my_find_prime_sup.c
*/

#include "libmy.h"

int my_find_prime_sup(int nb)
{
    if(nb > 2 && nb % 2 == 0)
		nb = nb + 1;
	while(!my_is_prime(nb))
		nb = nb + 2;
	return (nb);
}