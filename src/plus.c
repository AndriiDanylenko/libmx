#include "libmx.h"

char *plus(int num, char *str) {
    str[0] = num + '0';
    str[1] = '\0';
    return str;
}
