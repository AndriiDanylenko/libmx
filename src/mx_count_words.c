#include "libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int i = 0;
    
    if (!str) 
        return -1;
    while (str[i]) {
        while (str[i] && str[i] == c )
            i++;
        if (str[i] && str[i] != c)
            count++;
        while (str[i] && str[i] != c)
            i++;
    }
    return count;
}
