#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src,int c, size_t n) {
    char *d = dst;
    const char *s = src;
    char *ptr = 0;
    unsigned int i = 0;

    while (i < n && ptr == 0) {
        d[i] = s[i];
        if (s[i] == ((char)c))
            ptr = d + i + 1;
        i++;
    }    
    return ptr;
}
