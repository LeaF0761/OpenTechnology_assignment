#include <stdio.h>

int main() {
    int num1 = 10;
    double num2 = 5.5;
    float num3 = 2.5f;

    //int型と整数の積
    printf("num1 * 2 = %d\n", num1 * 2);
    //int型とint型の積
    printf("num1 * num1 = %d\n", num1 * num1);
    //int型とfloat型の積
    printf("num1 * num3 = %f\n", num1 * num3);
    //int型とdouble型の積
    printf("num1 * num2 = %f\n", num1 * num2);
    //double型とfloat型の積
    printf("num2 * num3 = %f\n", num2 * num3);


    //int型と整数の商
    printf("num1 / 2 = %d\n", num1 / 2);
    //int型とint型の商
    printf("num1 / num1 = %d\n", num1 / num1);
    //int型とfloat型の商
    printf("num1 / num3 = %f\n", num1 / num3);
    //int型とdouble型の商
    printf("num1 / num2 = %f\n", num1 / num2);
}
