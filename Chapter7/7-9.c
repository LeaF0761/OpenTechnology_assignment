#include <stdio.h>
#include <math.h>

int main() {
    double area;
    printf("area: ");
    scanf("%lf", &area);

    double sideLength = sqrt(area);
    printf("正方形の一辺: %.2lf\n", sideLength);

    return 0;
}
