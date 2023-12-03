
#include <stdio.h>

int str_len(const char *str) {
    const char *s = str;
    int count = 0;
    while (*s)
    {
        count++;
        s++;
    }
    return count;
}

int main() {
    const char *str = "ABC";
    int len = str_len(str);
    printf("文字数: %d\n", len);
    return 0;
}
