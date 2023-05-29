/*
** EPITECH PROJECT, 2022
** CPOOL_CWorkshopLib
** File description:
** my_revstr.c
*/

#include "../../../include/my.h"

char *my_revstr(char *str)
{
    int i = my_strlen(str);
    int j = 0;

    for (j = 0; j < i / 2; j++)
        my_swap_char(&str[j], &str[i - j - 1]);
    return (str);
}
