/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int a = 1;
    int r = 1;
    int final;

    if (nb == 0 || nb == 1)
        final = nb;
    while (r < nb) {
        a++;
        r = a * a;
        final = (nb == r) ? a : 0;
    }
    return (final);
}
