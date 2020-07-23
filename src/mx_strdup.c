#include "libmx.h"

char *mx_strdup(const char *s1) {
    char *s2;
    char *temp;
    int len = 0; 

    while (s1[len])
        len++;
    s2 = malloc(len + 1);
    temp = s2;
    while(*s1)
        *temp++ = *s1++;
    *temp = '\0';
    return s2;
}
