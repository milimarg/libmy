/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strcmp.c
*/

#include "../../../include/my.h"

int my_strcmp(const char *s1, const char *s2)
{
    int s1_len = my_strlen(s1);
    int s2_len = my_strlen(s2);

    for (int i = 0; i < s1_len || i < s2_len; i++)
        if (s1[i] != s2[i])
            return ((s1_len < s2_len) ? -1 : 1);
    return (0);
}
