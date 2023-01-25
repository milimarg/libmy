/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** Replaces string by another of lenght 'n'.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; src[i] != '\0' && i < n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}
