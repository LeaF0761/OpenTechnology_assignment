#include <stdio.h>

void adjust_point(int* n) {
    if (*n < 0) {
        *n = 0;
    } else if (*n > 100) {
        *n = 100;
    }
    return;
}

int main() {
    int n_array[] = {-10, 0, 50, 100, 110};

    for (int i = 0; i < 5; i++) {
        adjust_point(&n_array[i]);
        printf("%d\n", n_array[i]);
    }
    return 0;
}
