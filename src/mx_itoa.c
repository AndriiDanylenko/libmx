#include "libmx.h"

char *mx_itoa(int number) {
    char *str = (char*) malloc (sizeof(char) * 12);

    if(number >= 0 && number <= 9)
        plus(number, str);
    if(number >= 9)
        max_plus(number, str);
    if (number == -2147483648)
        return "-2147483648";
    if (number < 0)
        min(number, str);
    return str; 
}
