/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_char_memset.c
*/

#include "../my.h"

char *my_char_memset(char *s, int c, size_t n)
{
    for (size_t i = 0; i < n; i++)
        s[i] = c;
    return (s);
}
