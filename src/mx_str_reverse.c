#include "libmx.h"

void mx_str_reverse(char *s) {
    char *start = s;
    char *end = start + mx_strlen(s) - 1;
    char temp;

    while (end > start) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
