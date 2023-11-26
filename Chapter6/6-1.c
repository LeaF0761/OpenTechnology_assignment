#include <stdio.h>
int min(int a, int b);

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
    printf("min(1,2) = %d \n",min(1,2));

    return 0;
}
