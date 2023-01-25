/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_strncmp
*/

int my_strncmp(char *s1, char const *s2, int n)
{
    for (int i = 0; s1[i] != '\0' && i < n; i++) {
        if (*s1 != *s2)
            return (1);
    }
    return (0);
}
