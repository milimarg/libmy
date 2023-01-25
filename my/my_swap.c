/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}
