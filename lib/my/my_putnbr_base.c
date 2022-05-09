/*
** EPITECH PROJECT
** LibC
** File description:
** my_putnbr_base.c
*/

#include "libmy.h"

int my_putnbr_base(int nb, char *base)
{
  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb >= my_strlen(base) - 1)
    my_putnbr_base(nb / my_strlen(base), base);
  my_putchar(base[nb % my_strlen(base)]);
  return (nb);
}