/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** destroy_my_str_to_word_array.c
*/

#include <stdlib.h>

int destroy_my_str_to_word_array(char **str)
{
    for (int i = 0; str[i] != NULL; i++)
        free(str[i]);
    free(str);
    return (0);
}
