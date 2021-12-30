#include <stdlib.h>
#include "my_string.h"


int string_cmp(const char* str1, const char* str2) {
    int len1 = string_len(str1);
    int len2 = string_len(str2);
    if (len1 == len2)
    {
        for (int i = 0; i < len1; i++)
        {
            if (str1[i] != str2[i])
            {
                return 0;
            }
        }
        return 1;
    } else {
        return 0;
    }
}


unsigned int string_len(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}


void string_rev(char* str) {
    int len = string_len(str);
    for (int i = 0; i < len/2; i++) {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}


char *string_chr(const char* str, const char c) {
    int len = string_len(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == c) {
            return (char*)str+i;
        }
    }
    return NULL;
}
