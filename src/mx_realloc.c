#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *temp = malloc(size);
    mx_memset(temp, '\0', size);
    if (temp) 
        mx_memcpy(temp, ptr, size);
    free(ptr);
    return temp;
}
