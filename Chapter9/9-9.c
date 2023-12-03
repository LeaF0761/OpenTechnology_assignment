#include <stdio.h>

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

int main() {
    char s[] = "CBA";
    printf("s=%s\n", s);
    rev_string(s);
    printf("s=%s\n", s);

    return 0;
}
