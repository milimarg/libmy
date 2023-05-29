/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strndup.c
*/

#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    char *dest = malloc(sizeof(char) * (n + 1));
    int i = 0;

    for (; i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
