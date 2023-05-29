/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    char const *s = str;

    for (; *str; str++);
    return (str - s);
}
