#include "libmx.h"

void mx_print_strarr(char **arr, const char *delim) {
    int count = 0;
    
    if (arr != NULL && delim != NULL) {
        for (int i = 0; arr[i] != '\0'; i++) {
            mx_printstr(arr[i]);
            count++;
            if (arr[count] != '\0'){
                mx_printchar(*delim);
            }
        }
    }
    mx_printchar('\n');
}
