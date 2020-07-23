#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    int val = 0;
    unsigned long decimal = 0;
    int len = mx_strlen(hex);

    for (int i = 0; hex[i] != '\0'; i++ ) {
        if (hex[i] >= '0' && hex[i] <= '9')
            val = hex[i] - 48;
        if (mx_islower(hex[i]))
            val = hex[i] - 97 + 10;
        if (mx_isupper(hex[i]))
            val = hex[i] - 65 + 10;
        --len;
        decimal += val * mx_pow(16,len);     
    }
    return decimal;
}

