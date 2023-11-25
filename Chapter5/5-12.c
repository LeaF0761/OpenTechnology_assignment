#include <stdio.h>

#define STUDENT_NUM 4
#define SUBJECT_NUM 3
#define TEST_NUM 3
int main() {
    int test[STUDENT_NUM][TEST_NUM][SUBJECT_NUM] = {
        {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}},
        {{43, 73, 95}, {46, 32, 54}, {65, 23, 35}},
        {{43, 73, 95}, {46, 32, 54}, {65, 23, 35}}
    };
    int StudentId;
    int TestId;
    int SubjectId;
    
    //各生徒/各テスト/各教科の結果を表示
    for(int i = 0; i < STUDENT_NUM; i++) {
        printf("StudentId:%d\n", i + 1);
        for(int j = 0; j < TEST_NUM; j++) {
            printf("TestId%d: ", j + 1);
            for(int k = 0; k < SUBJECT_NUM; k++) {
                printf("SubjectId%d: %d ", k + 1, test[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("\n");
    //合計点の表示
    for(int i = 0; i < STUDENT_NUM; i++) {
        int StudentScoreSum=0;
        for(int j = 0; j < SUBJECT_NUM; j++) {
            for(int k = 0; k < TEST_NUM; k++) {
                StudentScoreSum += test[i][k][j];
            }
        }
        printf("生徒%dの合計点数: %d\n", i + 1, StudentScoreSum);
    }

    return 0;
}