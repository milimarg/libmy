/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_strncat
*/

#include "libmy.h"

char *my_strncat(char *dest, char const *src, int n)
{
    char *cat_start = dest + my_strlen(dest);

    for (int i = 0; i < n; i++)
        *cat_start++ = *src++;
    return (dest);
}
