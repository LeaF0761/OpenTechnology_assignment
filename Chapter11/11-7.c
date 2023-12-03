#include <stdio.h>

void put_string(const char* s) {
    while (*s)
    {
        putchar(*s);
        s++;
    }
    putchar('\n');
}

int main() {
    const char* str = "ABC";
    put_string(str);
    return 0;
}
