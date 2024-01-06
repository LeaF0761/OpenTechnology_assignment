#include <stdio.h>

int main() {
    char filename[FILENAME_MAX];
    printf("ファイル名: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("ファイルをオープンできません。\n");
        return 1;
    }

    int Count = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        //数字の数を数える
        if (ch >= '0' && ch <= '9') {
            Count++;
        }
    }

    printf("数字数: %d\n", Count);

    fclose(fp);
    return 0;
    
}