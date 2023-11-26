#include <stdio.h>
void put_count() {
    static int count = 0;
    count++;
    printf("put_count: %d\n", count);
}

int main() {
    put_count();
    put_count();
    put_count();

    return 0;
}
