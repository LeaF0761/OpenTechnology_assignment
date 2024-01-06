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
        if (ch == '\n') {
            Count++;
        }
    }

    printf("改行数: %d\n", Count);

    fclose(fp);
    return 0;
    
}
