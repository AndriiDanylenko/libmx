#include "libmx.h"

char *max_plus(int num, char *str) {
    int k = num;
    int m = 0;
    int i = 0;

    while (k) {
        k = k / 10;
        m++;
    }
    for (; m > i; m--) {
        str[m - 1] = num % 10 + 48;
        num /= 10;
    } 
    return str;
}
