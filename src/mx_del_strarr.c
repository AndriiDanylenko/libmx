#include "libmx.h"
void mx_del_strarr(char ***arr) {
    int i = 0;
    if (**arr) {
        while (arr[i++] != NULL)
            mx_strdel(&(*arr[i]));
        free(**arr);
        **arr = NULL;
    }
}
