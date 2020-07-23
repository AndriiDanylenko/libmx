#include "libmx.h"

int size_of_file(const char *file) {
    int fd = open(file, O_RDONLY);
    int c;
    int count = 0;

    while (read(fd,&c,1))
        count++;
    close(fd);
    return count;
}
