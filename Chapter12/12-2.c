#include <stdio.h>

struct xyz {
    int x;
    long y;
    double z;
};

struct xyz scan_xyz() {
    struct xyz result;

    printf("x: ");
    scanf("%d", &result.x);

    printf("y: ");
    scanf("%ld", &result.y);

    printf("z: ");
    scanf("%lf", &result.z);

    printf("\n");

    return result;
}

int main(void)
{
    struct xyz s = scan_xyz();

    printf("x: %d\n", s.x);
    printf("y: %ld\n", s.y);
    printf("z: %f\n", s.z);

    return 0;
}