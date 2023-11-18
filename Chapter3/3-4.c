#include <stdio.h>

int main() {
    int A, B;

    printf("整数値A：");
    scanf("%d", &A);

    printf("整数値B：");
    scanf("%d", &B);

    if (A == B) {
        printf("AとBは等しい。\n");
    } 
    else {
        if (A > B) {
            printf("AはBより大きい。\n");
        } else {
            printf("AはBより小さい。\n");
        }
    }

    return 0;
}
