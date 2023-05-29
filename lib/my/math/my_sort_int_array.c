/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_sort_int_array.c
*/

#include "../../../include/my.h"

static void my_bubble_sort_condition(int *tab, int i, int j)
{
    if (tab[i] < tab[j])
        my_swap(&tab[i], &tab[j]);
}

void my_sort_int_array(int *tab, int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            my_bubble_sort_condition(tab, i, j);
}
