#include <stdio.h>

void del_digit(char s[]) {
    int len = 0;
    
    while (s[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) 
    {
        if (s[i] >= '0' && s[i] <= '9') {
            for (int j = i; j < len; j++) {
                s[j] = s[j + 1];
            }
            len--;
            i--;
        }

    }
    s[len] = '\0';
}

int main() {
    char s[] = "abc123def789";
    printf("Before: %s\n", s);
    del_digit(s);
    printf("After: %s\n", s);
    return 0;
}
