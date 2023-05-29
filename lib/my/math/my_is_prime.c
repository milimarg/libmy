/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    int a = 0;
    int final = 1;

    for (int i = 2; i < nb; i++) {
        a = nb % i;
        if (a == 0) {
            final = 0;
            break;
        }
    }
    if (nb <= 1)
        final = 0;
    return (final);
}
