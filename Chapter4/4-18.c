#include <stdio.h>

int main()
{
    int n;
    printf("いくつ*を表示:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("*");
        if (i % 5 == 0) printf("\n");
    }

    return 0;
}
