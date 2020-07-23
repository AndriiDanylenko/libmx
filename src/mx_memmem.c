#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const char *p = big;

    if (big_len >= little_len) {
        while ((mx_memcmp(p, little, little_len) != 0)) {
            p++;
            big_len++;
        }
    }
    return (big_len >= little_len) ? (void*) p : NULL;
}
