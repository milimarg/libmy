/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int neg = 1;
    int nb = 0;

    for (; str[i] == '-' || str[i] == '+'; i++)
        neg *= (str[i] == '-') ? (-1) : 1;
    for (; str[i] >= '0' && str[i] <= '9'; i++)
        nb = (nb * 10) + (str[i] - '0');
    return (nb * neg);
}
