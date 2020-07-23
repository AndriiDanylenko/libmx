#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *ptr = (unsigned char *)s;

    while (n--) {
        if (*ptr != (unsigned char)c)
            ptr++;
        else
            return ptr;
    }
    return 0;
}
