#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t size = (size_t)mx_strlen(s1);
    int len = size < n ? size : n;
    char *copy = malloc(len + 1);
    char *temp;
    int i = 0;

    if (s1) {
        temp = copy;
        while (i < len) {
            *temp++ = *s1++;
            i++;
        }
        *temp = '\0';
    }
    return copy;
}
