/*
** EPITECH PROJECT, 2023
** my
** File description:
** libmy
*/

#ifndef LIBMY_H_
    #define LIBMY_H_
    #define my_char_isalpha(c) (c >= 33 && c <= 126)
// @brief Display a number
// @param nb number to display
int my_put_nbr(int nb);

// @brief Swap two pointer addresses
// @param a first address
// @param b second address
void my_swap(int *a, int *b);

// @brief Count length of string
// @param str string to check
int my_strlen(char const *str);

// @brief Extract a number from a string
// @param str string to check
int my_getnbr(char const *str);

// @brief Copy a string
// @param dest destination string
// @param src source string
char *my_strcpy(char *dest, char const *src);

// @brief Copy n characters of a string
// @param dest destination string
// @param src source string
// @param n number of characters
char *my_strncpy(char *dest, char const *src, int n);

// @brief Compare n characters of a string
// @param s1 first string
// @param s2 second string
// @param n number of characters
int my_strncmp(char *s1, char const *s2, int n);

// @brief Find a substring in a string
// @param haystack string
// @param needle substring
char *my_strstr(char *haystack, char const *needle);

// @brief Compare two strings
// @param s1 first string
// @param s2 second string
int my_strcmp(const char *s1, const char *s2);

// @brief Append a string onto another
// @param dest string to append
// @param src source string
char *my_strcat(char *dest, char const *src);

// @brief Append n characters of a string onto another
// @param dest string to append
// @param src source string
// @param n number of characters
char *my_strncat(char *dest, char const *src, int n);

// @brief Split a string into substrings
// @param str string to split
// @return Array of substrings terminated with NULL pointer
char **my_str_to_word_array(char const *str);

// @brief Split a string into substring using a given separator
// @param str string to plit
// @param separator separator to split the string
// @return Array of substrings terminated with NULL pointer
char **my_str_to_word_array_separator(char const *str, char separator);

// @brief Destroy a splitted string
// @param str splitted string (made with my_str_to_word_array function)
int destroy_my_str_to_word_array(char **str);

// @brief Create a copy of a string in memory
// @param str string to copy
char *my_strdup(char const *src);

// @brief Create a copy of n characters of a string in memory
// @param str string to copy
// @param n number of characters to copy
char *my_strndup(char const *src, int n);

// @brief Check if a character is part of the alphabet, or is a number
// @param c character to check
int my_char_isalphanum(char c);
#endif /* !LIBMY_H_ */
