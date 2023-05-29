/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_put_nbr.c
*/

#include "../../../include/my.h"

int my_put_nbr(int nb)
{
    char c = 0;

    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    c = nb % 10 + '0';
    my_putchar(c);
    return (0);
}
