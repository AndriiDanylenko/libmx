#include "libmx.h"

char *min(int num, char *str) {
    int m =1;
    int i = 1;
    int k = num;

    while (k) {
        k = k / 10;
        m++;
    }
    str[0] = '-';
    num *= -1;
    for (; m > i; m--) {
        str[m - 1] = num % 10 + 48;
        num /= 10;
    }
    return str;
}
