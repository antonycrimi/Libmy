/*
** EPITECH PROJECT
** LibC
** File description:
** my_putchar.c
*/

#include "libmy.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}