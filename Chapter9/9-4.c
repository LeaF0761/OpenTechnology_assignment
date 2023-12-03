#include <stdio.h>

void nullString(char s[]) {
    s[0] = '\0';
}

int main() {
    char s[] = "ABC";
    printf("s=%s\n", s);
    nullString(s);
    printf("s=%s\n", s);
    return 0;
}
