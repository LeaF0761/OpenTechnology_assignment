#include <stdio.h>

int main() {
    int no, reversedNum = 0;
    int temp;

    printf("正の整数を入力: ");
    scanf("%d", &no);
    if (no <= 0)   return 0;

    temp = no;

    while (temp != 0) {
        reversedNum = reversedNum * 10;
        reversedNum = reversedNum + temp % 10;
        temp = temp / 10;
    }

    printf("%dを逆から読むと%d\n",no, reversedNum);

    return 0;
}
