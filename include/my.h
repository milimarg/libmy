/*
** EPITECH PROJECT, 2023
** my
** File description:
** libmy
*/

#ifndef LIBMY_H_
    #define LIBMY_H_
    #define char_isvisible(c) (c >= ' ' && c <= '~')
    #define char_isalpha(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    #define char_isnum(c) (c >= '0' && c <= '9')
    #define char_isalphanum(c) (char_isalpha(c) || char_isnum(c))
    #include <stddef.h>

/* DISPLAY */

// @brief Display a number
// @param nb number to display
int my_put_nbr(int nb);

// @brief Print a given char
// @param char to print
void my_putchar(char c);

// @brief Print a given string
// @param string to print
void my_putstr(char const *str);

/* MATH */

// @brief Check if the given number is negative or not
// @param nb number to check
int my_isneg(int nb);

// @brief Sort numbers in an array
// @param tab array to sort
// @param size size of array
void my_sort_int_array(int *tab, int size);

// @brief Compute a power of two numbers recursively
// @param nb number one
// @param p number two
int my_compute_power_rec(int nb, int p);

// @brief Compute a square root of a whole number
// @param number to square root
int my_compute_square_root(int nb);

// @brief Check if a number is prime
// @param number to check
int my_is_prime(int nb);

// @brief Search for the nearest prime number
// @param start number
int my_find_prime_sup(int nb);

/* MEMORY */

// @brief Fill n bytes of byte c in memory area s
// @param s memory area to fill
// @param c constant byte to store
// @param n number of bytes to fill
char *my_char_memset(char *s, int c, size_t n);

// @brief Create a copy of a string in memory
// @param str string to copy
char *my_strdup(char const *src);

// @brief Create a copy of n characters of a string in memory
// @param str string to copy
// @param n number of characters to copy
char *my_strndup(char const *src, int n);

// @brief Swap two pointer addresses, to swap 2 int values
// @param a first address
// @param b second address
void my_swap(int *a, int *b);

// @brief swap two pointer addresses, to swap 2 char values
// @param a first address
// @param b second address
void my_swap_char(char *a, char *b);

/* MY STR TO WORD ARRAY */

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

/* STRING */

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

// @brief Reverse a given string
// @param string to reverse
char *my_revstr(char *str);

#endif /* !LIBMY_H_ */
