#include <stdio.h>

enum BloodType {
    A,
    B,
    O,
    AB
};

int main() {
    enum BloodType bloodType;

    printf("血液型を選べ（A: 0, B: 1, O: 2, AB: 3）: ");
    scanf("%d", &bloodType);

    switch (bloodType) {
        case A:
            printf("あなたはA型\n");
            break;
        case B:
            printf("あなたはB型\n");
            break;
        case O:
            printf("あなたはO型\n");
            break;
        case AB:
            printf("あなたはAB型\n");
            break;
        default:
            printf("無効な血液型です。\n");
            break;
    }

    return 0;
}

