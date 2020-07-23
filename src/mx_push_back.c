#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *current = *list;
    t_list *new = mx_create_node(data);

    if (*list == NULL)
        *list = new;
    else {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }
}
