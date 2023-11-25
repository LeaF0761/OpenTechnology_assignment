#include <stdio.h>

#define MAX_SCORE 100
#define NUM_STUDENTS 10
#define WIDTH 10

int main()
{
    int scores[NUM_STUDENTS];
    int num_students;
    int frequency[MAX_SCORE / WIDTH + 1] = {0};

    printf("学生の人数: ");
    scanf("%d", &num_students);
    if (num_students > NUM_STUDENTS) return 0;

    printf("%d人の点数を入力してください:\n", num_students);
    // 学生の点数を読み込む
    for (int i = 0; i < num_students; i++)
    {
        printf("%d人目: ", i + 1);
        scanf("%d", &scores[i]);
        //入力が0~100の範囲になるようにする
        if (scores[i] < 0) scores[i] = 0;
        if (scores[i] > 100) scores[i] = 100;

        frequency[scores[i] / WIDTH]++;
    }

    printf("\n---分布グラフ---\n");
    for(int i=0 ; i<MAX_SCORE/WIDTH+1 ; i++){
        // 0~9, 10~19, 20~29, ... , 90~99, 100
        if (i == MAX_SCORE / WIDTH) printf("      %3d: ", MAX_SCORE);
        else                        printf("%3d ~ %3d: ", i*WIDTH, i*WIDTH+WIDTH-1);
        for(int j=0 ; j<frequency[i] ; j++){
            printf("*");
        }
        printf("\n");
    }
    
    

    return 0;
}
