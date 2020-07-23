#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    int count = 1;
    unsigned long remainder = nbr;
    char *p = NULL;

    while (remainder / 16) {
        count++;
        remainder /= 16;
    }
    p = mx_strnew(count);
    for (int i = 1, len = count; i <= len; i++) {
        count--;
        if ((nbr % 16) < 10)
            p[count] = nbr % 16 + 48;
        else 
            p[count] = nbr % 16 + 87;
        nbr /= 16;
    }
    return p;
}
