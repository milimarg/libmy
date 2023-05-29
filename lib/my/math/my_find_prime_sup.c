/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_find_prime_sup.c
*/

#include "../../../include/my.h"

int my_find_prime_sup(int nb)
{
    int i = nb;

    for (; !my_is_prime(i); i++);
    return (i);
}
