#include <stdio.h>
//文字列の数の最大値
#define MAX_SIZE 10
#define MAX_LENGTH 128

void put_strary(const char s[][MAX_LENGTH], int n) {
    for (int i = 0; i < n; i++) {
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }
}
int read_strary(char s[][MAX_LENGTH], int n) 
{
    int count = MAX_SIZE;
    printf("文字列を入力(最大%d個)\n", MAX_SIZE);
    for (int i = 0; i <  MAX_SIZE; i++) {    
        scanf("%s", s[i]);
        //$$$$$が入力されたら終了
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$') {
            count = i;
            break;
        }
    }

    return count;
}

int main() {
    char s[MAX_SIZE][MAX_LENGTH];
    int count_str = read_strary(s, MAX_SIZE);

    printf("\n");
    put_strary(s, count_str);

    return 0;
}
