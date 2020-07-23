#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int l = left;
    int r = right;
    char *middle = arr[(right + left) / 2];
    char *pivot = middle;
    char *temp = NULL;
    int swap = 0;

    
    if (!arr) 
        return -1;
    while (l <= r) {
        while (mx_strlen(arr[l]) < mx_strlen(pivot))
            l++;
        while (mx_strlen(arr[r]) > mx_strlen(pivot))
            r--;
        if (l <= r) {
            if (mx_strlen(arr[l]) > mx_strlen(arr[r])) {
                temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                swap++;
            }
        l++;
        r--;
        }
    }
    if (left < r)
        mx_quicksort(arr, left, r);
    if(right > l)
        mx_quicksort(arr, l, right);
    return swap;
}
