#include <stdio.h>

struct Student {
    char name[64];
    double height;
    double weight;
};

struct Student scan_Student() {
    struct Student result;

    printf("名前: ");
    scanf("%s", result.name);

    printf("身長: ");
    scanf("%lf", &result.height);

    printf("体重: ");
    scanf("%lf", &result.weight);

    printf("\n");

    return result;
}

int main(void)
{
    struct Student tarou = scan_Student();

    printf("名前: %s\n", tarou.name);
    printf("身長: %f\n", tarou.height);
    printf("体重: %f\n", tarou.weight);

    return 0;
}