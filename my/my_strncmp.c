/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_strncmp
*/

#include "libmy.h"

int my_strncmp(char *s1, char const *s2, int n)
{
    int s1_len = my_strlen(s1);
    int s2_len = my_strlen(s2);

    for (int i = 0; s1[i] != '\0' && i < n; i++) {
        if (s1[i] != s2[i])
            return ((s1_len < s2_len) ? -1 : 1);
    }
    return (0);
}
