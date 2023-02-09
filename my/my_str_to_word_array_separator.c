/*
** EPITECH PROJECT, 2022
** CPOOL_CWorkshopLib
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include "libmy.h"

int *count_words_len_separator(char const *str, int words_nb, char separator)
{
    int i = 0;
    int k = 0;
    int next_index = 0;
    int *full_len = malloc(sizeof(int) * words_nb);

    while (str[i] != '\0') {
        if (str[i] != separator && str[i + 1] == separator) {
            full_len[k] = i - next_index + 1;
            next_index = i + 2;
            k++;
        }
        i++;
    }
    return (full_len);
}

char *word_saver_separator(int idxs[], const char *str, int current_word_len,
char separator)
{
    int k = 0;
    char *word = malloc(sizeof(char) * (current_word_len + 1));

    while (idxs[1] <= idxs[0]) {
        word[k] = (str[idxs[1]] != separator) ? str[idxs[1]] : '\0';
        k += (str[idxs[1]] != separator);
        idxs[1]++;
    }
    word[k] = '\0';
    return (word);
}

char **divide_array_separator(char const *str, int words_nb, char separator)
{
    char **result = malloc(sizeof(char *) * (words_nb + 1));
    char *word = NULL;
    int *words_len = count_words_len_separator(str, words_nb, separator);
    int current_word_len;
    int l = 0;
    int idxs[2] = {0};

    for (; str[idxs[0]] != '\0'; idxs[0]++) {
        if (str[idxs[0]] != separator && str[idxs[0] + 1] == separator) {
            current_word_len = words_len[l];
            word = word_saver_separator(idxs, str, current_word_len, separator);
            idxs[1] = idxs[0] + 2;
            result[l++] = word;
        }
    }
    result[l] = NULL;
    free(words_len);
    return (result);
}

char **my_str_to_word_array_separator(char const *str, char separator)
{
    int words_nb = 0;
    char **result;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] != separator && str[i + 1] == separator)
            words_nb++;
    result = divide_array_separator(str, words_nb, separator);
    return (result);
}
