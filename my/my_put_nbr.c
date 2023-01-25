/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_put_nbr
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
