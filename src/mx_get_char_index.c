#include "libmx.h"

int mx_get_char_index(const char *str, char c) {
    int count = 0;
    int def;

    if (str) {
        while (*str != '\0') {
            if (*str == c) {
                def = count;
                break;
            }
            else 
                def = -1;
            str++;
            count++;
        }
    }
    else 
        def = -2;
    return def;
}
