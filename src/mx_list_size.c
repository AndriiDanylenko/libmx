#include "libmx.h"

int mx_list_size(t_list *list) {
    int count = 0;
    t_list *current = list;

    while (current) {
        current = current->next;
        count++;
    }
    return count;
}
