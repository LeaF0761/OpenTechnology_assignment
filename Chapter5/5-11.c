#include <stdio.h>

#define STUDENT_NUM 6
#define SUBJECT_NUM 2
int main() {
    int test[STUDENT_NUM][SUBJECT_NUM];
    int StudentId;
    int SubjectId;

    for(int i = 0; i < STUDENT_NUM; i++) {
        printf("StudentId:%d\n", i + 1);
        for(int j = 0; j < SUBJECT_NUM; j++) {
            printf("SubjectId%d: ", j + 1);
            scanf("%d", &test[i][j]);
        }
    }

    // 科目毎の合計点数と平均点の計算    
    for(int i = 0; i < SUBJECT_NUM; i++) {
        int SubjectScoreSum=0;
        float average=0;
        for(int j = 0; j < STUDENT_NUM; j++) {
            SubjectScoreSum += test[j][i];
        }
        average = (float)SubjectScoreSum / STUDENT_NUM;
        printf("科目%dの合計点数: %d\n", i + 1, SubjectScoreSum);
        printf("科目%dの平均点数: %.2f\n", i + 1, average);
    }
    
    // 学生毎の合計点数と平均点の計算
    for(int i = 0; i < STUDENT_NUM; i++) {
        int StudentScoreSum=0;
        float average=0;
        for(int j = 0; j < SUBJECT_NUM; j++) {
            StudentScoreSum += test[i][j];
        }
        average = (float)StudentScoreSum / SUBJECT_NUM;
        printf("学生%dの合計点数: %d\n", i + 1, StudentScoreSum);
        printf("学生%dの平均点数: %.2f\n", i + 1, average);
    }

    return 0;
}
