#include "libmx.h"

int mx_islower(int s) {
    if (s >= 97 && s <= 122)
        return 1;
    else
        return 0; 
}
