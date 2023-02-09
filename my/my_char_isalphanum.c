/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** my_char_isalphanum
*/

int my_char_isalphanum(char c)
{
    int check = 0;

    if (c >= 'a' && c <= 'z')
        check++;
    if (c >= 'A' && c <= 'Z')
        check++;
    if (c >= '0' && c <= '9')
        check++;
    return (check != 0);
}
