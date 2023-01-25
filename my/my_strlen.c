/*
** EPITECH PROJECT, 2023
** my
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    char const *s = str;

    for (; *str; str++);
    return (str - s);
}
