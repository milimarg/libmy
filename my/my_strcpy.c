/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** Replaces string by another.
*/

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; dest[i++] = src[i])
    return (dest);
}
