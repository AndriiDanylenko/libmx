#include "libmx.h"

char *mx_file_to_str(const char *file) {
    int fd = open(file, O_RDWR);
    char *p = NULL;
    int size;
   
    if (fd == -1) 
        return p;
    size = size_of_file(file);
    p = mx_strnew(size);
    read(fd, p, size);
    close(fd);
    return p;  
}
