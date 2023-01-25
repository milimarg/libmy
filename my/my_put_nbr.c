/*
** EPITECH PROJECT, 2022
** CPOOL_CWorkshopLib
** File description:
** my_put_nbr.c
*/

#include <unistd.h>

int my_put_nbr(int nb)
{
    char c = 0;

    if (nb == 0) {
        write(1, "0", 1);
        return (0);
    }
    if (nb < 0) {
        write(1, "-", 1);
        nb *= -1;
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
    return (0);
}
