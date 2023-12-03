#include <stdio.h>


//文字列の数の最大値
#define MAX_SIZE 10

int main() {
    char s[MAX_SIZE][100];
    int count= MAX_SIZE;

    printf("文字列を入力(最大%d個)\n", MAX_SIZE);
    for (int i = 0; i <  MAX_SIZE; i++) {    
        scanf("%s", s[i]);
        //$$$$$が入力されたら終了
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            count = i;
            break;
        }
    }

    printf("\n");
    for (int i = 0; i < count; i++) {
        printf("s[%d]%s\n", i,s[i]);
    }

    return 0;
}
