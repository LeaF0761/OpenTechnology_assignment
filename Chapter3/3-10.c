#include <stdio.h>

int main() {
    int A, B, C;

    printf("整数A: ");
    scanf("%d", &A);
    printf("整数B: ");
    scanf("%d", &B);
    printf("整数C: ");
    scanf("%d", &C);

    if (A == B && B == C) {
        printf("全て等しい\n");
    } else if (A == B || B == C || A == C) {
        printf("二つ等しい\n");
    } else {
        printf("全て異なる\n");
    }

    return 0;
}
