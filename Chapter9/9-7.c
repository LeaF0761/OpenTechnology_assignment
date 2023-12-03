#include <stdio.h>

void put_stringn(const char s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s", s);
    }
}

int main() {
    const char *s = "ABC";
    int n = 3;

    put_stringn(s, n);
    return 0;
}
