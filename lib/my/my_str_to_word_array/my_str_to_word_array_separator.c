/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_to_word_array_separator.c
*/

#include <stdlib.h>
#include "../../../include/my.h"

static int *count_words_len_separator(char const *str, int words_nb,
char separator)
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

static char *word_saver_separator(int idxs[], const char *str,
int current_word_len, char separator)
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

static char **divide_array_separator(char const *str, int words_nb,
char separator)
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
    int len = my_strlen(str);
    int words_nb = 0;
    int i = 0;
    char *new_str = malloc(sizeof(char) * (len + 2));
    char **result = NULL;

    for (i = 0; i < len; i++)
        new_str[i] = str[i];
    new_str[i++] = separator;
    new_str[i++] = 0;
    for (i = 0; i < len; i++)
        if (char_isalpha(new_str[i]) && !char_isalphanum(new_str[i + 1]))
            words_nb++;
    result = divide_array_separator(new_str, words_nb, separator);
    free(new_str);
    return (result);
}
