#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    char *str = dst;
    
    while ((*dst++ = *src++) != '\0');
    return str;
}
