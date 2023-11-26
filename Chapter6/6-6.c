#include <stdio.h>

void alart(int n) {
    for (int i = 0; i < n; i++) {
        printf("警報! \a\n");
    }
}

int main() {
    int n;
    printf("連続して発する警報の回数を入力してください: ");
    scanf("%d", &n);
    alart(n);
    return 0;
}
