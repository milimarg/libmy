#include <stdio.h>
#include "libmy.h"

int main(void)
{
    char src[] = "abc";
    char dest[1] = "";
    char s1[] = "hey";
    char s2[] = "hey";

    int result = my_strncmp(s1, s2, 10);
    printf("result = %d\n", result);
    return (0);
}
