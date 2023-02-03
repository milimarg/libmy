/*
** EPITECH PROJECT, 2023
** my
** File description:
** libmy
*/

#ifndef LIBMY_H_
    #define LIBMY_H_
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
#endif /* !LIBMY_H_ */
