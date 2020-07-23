#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    char *temp = s1 + mx_strlen(s1);

    while (*s2 != '\0')
        *temp++ = *s2++;
    return s1;
}
