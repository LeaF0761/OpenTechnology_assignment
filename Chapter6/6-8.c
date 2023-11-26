
#include <stdio.h>

int min_of(const int v[], int n) {
    int min = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] < min) {
            min = v[i];
        }
    }
    return min;
}

int main() {
    int v[] = {5, 2, 8, 1, 9};
    int n = sizeof(v) / sizeof(v[0]);
    int min = min_of(v, n);
    printf("最小値: %d\n", min);
    return 0;
}
