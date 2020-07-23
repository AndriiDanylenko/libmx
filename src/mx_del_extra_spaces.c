#include "libmx.h"
char *mx_del_extra_spaces(const char *str) {
    if (str) {
        char *new = mx_strnew(mx_strlen(str));
	int i = 0;
	char *temp;

	for (int j = 0; str[j]; j++) {
	    if (!mx_isspace(str[j])) {
	        new[i] = str[j];
		i++;
	    }
	    if (!mx_isspace(str[j]) && mx_isspace(str[j + 1])) {
	        new[i] = ' ';
		i++;
	    }
	}
	temp = mx_strtrim(new);
	free(new);
	if (temp == NULL)
	    return mx_strnew(0);
	return temp;
    }
    return NULL;
}

/* char *mx_del_extra_spaces(const char *str) {
    char *tmp;
    int size = mx_strlen(str);
    char *ret = (char*) malloc(size * sizeof(char) + 1);
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (mx_isspace(str[i])) {
          ret[j++] = str[i];
          while (mx_isspace(str[i++]));
          i--;
          ret[j++] = str[i];
          continue;
        }
        ret[j++] = str[i];
    }
    ret[size] = '\0';
    tmp = mx_strtrim(ret);
    return tmp;
}
 */
