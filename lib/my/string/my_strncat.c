/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncat.c
*/

#include "../../../include/my.h"

char *my_strncat(char *dest, char const *src, int n)
{
    char *cat_start = dest + my_strlen(dest);

    for (int i = 0; i < n; i++)
        *cat_start++ = *src++;
    return (dest);
}
