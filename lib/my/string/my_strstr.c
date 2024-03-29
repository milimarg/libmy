/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strstr.c
*/

#include "../../../include/my.h"

char *my_strstr(char *haystack, char const *needle)
{
    int needle_len = my_strlen(needle);

    for (int i = 0; haystack[i] != '\0'; i++) {
        if (!my_strncmp(&haystack[i], needle, needle_len))
            return (&haystack[i]);
    }
    return (NULL);
}
