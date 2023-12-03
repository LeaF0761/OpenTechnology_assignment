#include <stdio.h>

void del_digit(char *s) {
    while (*s) {
        if (*s >= '0' && *s <= '9')
        {
            char *temp = s;
            while (*temp) {
                *temp = *(temp + 1);
                temp++;
            }
        } 
        else
        {
            s++;
        }
    }

    *s = '\0';

}

int main() {
    char s[] = "abc123def789";
    printf("Before: %s\n", s);
    del_digit(s);
    printf("After: %s\n", s);
    return 0;
}