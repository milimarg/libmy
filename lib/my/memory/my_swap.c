/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_swap.c
*/

void my_swap_char(char *a, char *b)
{
    char c = *a;

    *a = *b;
    *b = c;
}

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}
