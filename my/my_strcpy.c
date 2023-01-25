/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** Replaces string by another.
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    return (dest);
}
