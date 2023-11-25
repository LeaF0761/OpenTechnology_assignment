#include <stdio.h>

#define DATA_MAX 100

int main() {
    int data[DATA_MAX];
    int num;

    printf("データの個数（最大%d: ", DATA_MAX);
    scanf("%d", &num);


    printf("データを入力してください:\n");
    for (int i = 0; i < num; i++) {
        printf("data[%d] = ", i);
        scanf("%d", &data[i]);
    }

    printf("入力されたデータ: {");
    for (int i = 0; i < num; i++) {
        printf("%d", data[i]);
        if (i != num - 1) {
            printf(",");
        }
    }
    printf("}\n");

    return 0;
}
