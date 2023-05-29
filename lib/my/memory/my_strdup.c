/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strdup.c
*/

#include <stdlib.h>
#include "../../../include/my.h"

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
