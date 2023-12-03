#include <stdio.h>

int str_cnum(const char s[], char c) {
    int count = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == c) {
            count++;
        }
        i++;

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
