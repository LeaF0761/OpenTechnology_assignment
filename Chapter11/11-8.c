#include <stdio.h>

int str_cnum(const char *s, char c) {
    int count = 0;
    while (*s) {
        if (*s == c) {
            count++;
        }
        s++;
    }
    return count;

}

int main() {
    const char s[] = "AABBCCDD";
    char c = 'A';
    char c2 = 'X';

    int count = str_cnum(s, c);
    int count2 = str_cnum(s, c2);
    printf("%sは%cを%d個含む\n", s, c, count);
    printf("%sは%cを%d個含む\n", s, c2, count2);
    return 0;
}