#include <stdio.h>

int main() {
    char filename[100];
    printf("ファイル名を入力（最大99文字）: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file) {
        printf("そのファイルは存在します。\n");
        fclose(file);
    } else {
        printf("そのファイルは存在しません。\n");
    }

    return 0;
}
