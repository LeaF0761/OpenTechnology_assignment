#include <stdio.h>

int str_char(const char s[], char c) {
    int index = -1;
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c) {
            index = i;
            break;
        }
        i++;
    }
    return index;
}

int main() {
    const char s[] = "ABC";
    char c = 'B';
    char c2 = 'D';
    int index = str_char(s, c);
    int index2 = str_char(s, c2);
    printf("Index: %d\n", index);
    printf("Index2: %d\n", index2);
    return 0;
}
