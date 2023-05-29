/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include "../../../include/my.h"

static int *count_words_len(char const *str, int words_nb)
{
    int i = 0;
    int k = 0;
    int next_index = 0;
    int *full_len = malloc(sizeof(int) * words_nb);

    while (str[i] != '\0') {
        if (char_isalpha(str[i]) && !char_isalpha(str[i + 1])) {
            full_len[k++] = i - next_index + 1;
            next_index = i + 2;
        }
        i++;
    }
    return (full_len);
}

static char *word_saver(int i, int j, const char *str, int current_word_len)
{
    int k = 0;
    char *word = malloc(sizeof(char) * (current_word_len + 1));

    while (j <= i) {
        word[k] = (char_isalpha(str[j])) ? str[j] : '\0';
        k += (char_isalpha(str[j]));
        j++;
    }
    word[k] = '\0';
    return (word);
}

static char **divide_array(char const *str, int words_nb)
{
    char **result = malloc(sizeof(char *) * (words_nb + 1));
    char *word = NULL;
    int *words_len = count_words_len(str, words_nb);
    int current_word_len = 0;
    int j = 0;
    int l = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (char_isalpha(str[i]) && !char_isalpha(str[i + 1])) {
            current_word_len = words_len[l];
            word = word_saver(i, j, str, current_word_len);
            j = i + 2;
            result[l++] = word;
        }
    }
    result[l] = NULL;
    free(words_len);
    return (result);
}

char **my_str_to_word_array(char const *str)
{
    int len = my_strlen(str);
    int words_nb = 0;
    char **result = NULL;

    for (int i = 0; i < len; i++)
        if (char_isalpha(str[i]) && !char_isalpha(str[i + 1]))
            words_nb++;
    result = divide_array(str, words_nb);
    return (result);
}
