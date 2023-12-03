#include <stdio.h>
#include <ctype.h>

void str_toUpper(char* str) {

    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int main() {
    char str1[] = "abc";
    printf("str1: %s\n", str1);
    str_toUpper(str1);
    printf("str1: %s\n", str1);    
    return 0;
}