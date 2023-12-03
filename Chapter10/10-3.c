#include <stdio.h>

void sort3(int* n1, int* n2, int* n3) {
    if (*n1 > *n2) {
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
    if (*n2 > *n3) {
        int temp = *n2;
        *n2 = *n3;
        *n3 = temp;
    }
    if (*n1 > *n2) {
        int temp = *n1;
        *n1 = *n2;
        *n2 = temp;
    }
}

int main() {
    int n1 = 3, n2 = 1, n3 = 2;
    printf("Before sorting: %d, %d, %d\n", n1, n2, n3);
    sort3(&n1, &n2, &n3);
    printf("After sorting: %d, %d, %d\n", n1, n2, n3);
    return 0;
}
