/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_strcat
*/

#include "libmy.h"

char *my_strcat(char *dest, char const *src)
{
    char *cat_start = dest + my_strlen(dest);

    while ((*cat_start++ = *src++));
    return (dest);
}
