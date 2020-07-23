#include "libmx.h"

int mx_isupper(int s) {
    if(s >= 65 && s <= 90)
        return 1;
    else
        return 0;
}
