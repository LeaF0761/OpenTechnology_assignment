#include <stdio.h>

int main() {
    char filename[100];
    printf("ファイル名を入力（最大99文字）: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "w");

    fclose(file);
    
    return 0;
}
