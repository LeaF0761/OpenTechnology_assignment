#include <stdio.h>

char str_cpy(char* s1, const char *s2) 
{
    char *s = s1;
    while (*s2)
    {
        *s = *s2;
        s++;
        s2++;
    }
    *s = '\0';
    return *s1;
}

int main() {
    char str[128] = "ABC";
    char tmp[128];
    int len = str_cpy(tmp, str);

    printf("コピー後: %s\n", tmp);
    return 0;
}