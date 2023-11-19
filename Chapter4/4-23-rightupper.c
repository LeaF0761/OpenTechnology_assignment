#include <stdio.h>

int main(void)
{
    int len;

    puts("右上直角二等辺三角形を表示");
    printf("短辺：");
    scanf("%d", &len);

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= len; j++) {
            if (j < i) {
                putchar(' ');
            } else {
                putchar('*');
            }
        }    
        putchar('\n');
    }
}