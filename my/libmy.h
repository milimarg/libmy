/*
** EPITECH PROJECT, 2023
** my
** File description:
** libmy
*/

#ifndef LIBMY_H_
    #define LIBMY_H_
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
int my_strncmp(char *s1, char const *s2, int n);
char *my_strstr(char *haystack, char const *needle);
int my_strcmp(const char *s1, const char *s2);
#endif /* !LIBMY_H_ */
