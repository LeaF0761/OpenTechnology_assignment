#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    FILE *sfp;
    FILE *dfp;
    
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名: ");
    scanf("%s", sname);
    printf("コピー先ファイル名: ");
    scanf("%s", dname);

    if((sfp = fopen(sname, "rb") )== NULL) {
        printf("コピー元ファイルをオープンできません。\n");
    } else if ((dfp = fopen(dname, "wb")) == NULL) {
        printf("コピー先ファイルをオープンできません。\n");
    }
    else {
        //ファイルのコピーをバイナリで行う
        int ch;
        while (fread(&ch, sizeof(int), 1, sfp) != 0) {
            fwrite(&ch, sizeof(int), 1, dfp);
        }
        printf("コピー完了\n");
    }
    
    return 0;
}