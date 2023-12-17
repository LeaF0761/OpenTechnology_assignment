#include <stdio.h>
#include <string.h>

#define StudentCount 5
#define NAME_LEN 64

struct Student {
    char name[NAME_LEN];
    int height;
    double weight;
}typedef Student;

Student scan_Student() {
    Student result;

    printf("名前: ");
    scanf("%s", result.name);

    printf("身長: ");
    scanf("%d", &result.height);

    printf("体重: ");
    scanf("%lf", &result.weight);

    printf("\n");

    return result;
}

void swap_Student(Student *x,Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j - 1].height > a[j].height) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

void sort_by_name(Student a[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (strcmp(a[j - 1].name, a[j].name) > 0) {
                swap_Student(&a[j - 1], &a[j]);
            }
        }
    }
}

int main(void)
{
    Student students[StudentCount];

    for (int i = 0; i < StudentCount; i++) {
        printf("%d人め\n", i + 1);
        students[i] = scan_Student();
    }

    printf("名前 or 身長 or not？(0:名前,1:身長,それ以外:ソートしない): ");
    int sort;
    scanf("%d", &sort);
    if (sort == 0) {
        sort_by_name(students, StudentCount);
    } else if (sort == 1) {
        sort_by_height(students, StudentCount);
    }
    else {
        printf("ソートしない\n");
    }
    
    for (int i = 0; i < StudentCount; i++) {
        printf("名前: %s\n", students[i].name);
        printf("身長: %d\n", students[i].height);
        printf("体重: %f\n", students[i].weight);
        printf("\n");
    }

    return 0;
}