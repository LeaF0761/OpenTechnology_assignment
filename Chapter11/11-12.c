#include <stdio.h>

int atoi(const char* str) {
    int num = 0;
    while (*str)
    {
        num = num * 10 + (*str - '0');
        str++;
    }
    return num;
}

int main() {
    const char* str = "123";
    int num = atoi(str);
    printf("文字列: %s\n", str);
    printf("数値: %d\n", num);
    return 0;
}