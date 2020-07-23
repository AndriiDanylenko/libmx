#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    const char *defstr;
    const char *srcstr;

    srcstr = needle;
    if (*srcstr == 0) 
        return (char *) haystack;
    for (; *haystack != 0; haystack += 1) {
        if (*haystack != *srcstr) 
            continue;
        defstr = haystack;
        while (1) {
            if (*srcstr == 0) 
                return (char *) haystack;
            if (*defstr++ != *srcstr++) 
                break;
        }
        srcstr = needle;
    }
    return NULL;
}
