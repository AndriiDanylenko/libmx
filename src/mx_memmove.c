#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    char *s = (char *)src;
    char *d = (char *)dst;
    char *lastsrc;
    char *lastdst;

    if (len < 0)
        return 0;
    if (d < s)
        *d++ = *s++;
    else {
        lastsrc = s + (len - 1);
        lastdst = d + (len - 1);
        while (len--)
            *lastdst-- = *lastsrc--;
    }
    return dst;
}
