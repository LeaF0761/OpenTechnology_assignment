#include <stdio.h>

int main() {
    float floatValue;
    double doubleValue;
    long double longDoubleValue;

    printf("float: ");
    scanf("%f", &floatValue);
    printf("Double: ");
    scanf("%lf", &doubleValue);
    printf("long double: ");
    scanf("%Lf", &longDoubleValue);

    printf("\n", floatValue);
    printf("float: %f\n", floatValue);
    printf("Double: %lf\n", doubleValue);
    printf("long double: %Lf\n", longDoubleValue);

    return 0;
}
