/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_char_memset.c
*/

#include "../../../include/my.h"

char *my_char_memset(char *s, int c, size_t n)
{
    for (size_t i = 0; i < n; i++)
        s[i] = c;
    return (s);
}
