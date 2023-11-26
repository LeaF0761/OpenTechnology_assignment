#include <stdio.h>

int main() {
    int count = 0;
    char ch;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }

    printf("行数: %d\n", count);

    return 0;
}
