#include <stdio.h>

#define ROW1 4
#define COL1 3
#define ROW2 3
#define COL2 4

void mat_mul(const int a[ROW1][COL1], const int b[ROW2][COL2], int result[ROW1][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int matrix1[ROW1][COL1];
    int matrix2[ROW2][COL2];
    int result[ROW1][COL2];

    printf("4行3列の行列:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("３行４列の行列を入力:\n");
    for (int i = 0; i < ROW2; i++) {
        for (int j = 0; j < COL2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    mat_mul(matrix1, matrix2, result);
    printf("行列の積:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}