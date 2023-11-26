#include <stdio.h>

int min(int a, int b, int c) {
    int min_value = a;
    if (b < min_value) {
        min_value = b;
    }
    if (c < min_value) {
        min_value = c;
    }
    return min_value;
}

int main()
{
    printf("min(1,2,3) = %d \n",min(1,2,3));

    return 0;
}
