#include <stdio.h>

#define MAX_LEN 128

void rev_string(char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) 
    {
        char tmp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = tmp;
    }
}
void rev_strings(char s[][MAX_LEN], int n) {
    for (int i = 0; i < n; i++) {
        rev_string(s[i]);
    }
}


int main() {
    char s[][MAX_LEN] = {"ABC", "DEF", "GHI"};

    //文字列配列の要素数を求める
    int n = sizeof(s) / sizeof(s[0]);
    printf("Before: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", s[i]);
    }
    printf("\n");
    rev_strings(s, n);
    printf("After: ");
    for (int i = 0; i < n; i++) {
        printf("%s ", s[i]);
    }
    printf("\n");

    return 0;
}
