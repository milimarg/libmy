/*
** EPITECH PROJECT, 2022
** CPOOL_CWorkshopLib
** File description:
** my_strcat.c
*/

#include "libmy.h"

char *my_strcat(char *dest, char const *src)
{
    char *cat_start = dest + my_strlen(dest);

    while ((*cat_start++ = *src++));
    return (dest);
}
