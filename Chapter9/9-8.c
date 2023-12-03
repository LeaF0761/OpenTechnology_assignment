#include <stdio.h>

void put_stringr(const char s[]) {
    int char_count = 0;
    while (s[char_count] != '\0') {
        char_count++;
    }
    for (int i = char_count - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
}

int main() {
    char *s = "CBA";
    put_stringr(s);
    return 0;
}
