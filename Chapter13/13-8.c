#include <stdio.h>

char toBig(char ch)
{
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    } else {
        return ch;
    }
}
char toSmall(char ch)
{
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 'a';
    } else {
        return ch;
    }
}

int main(void)
{
    FILE *sfp;
    FILE *dfp;
    FILE *Bigfp;
    FILE *Smallfp;
    

    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("コピー元ファイル名: ");
    scanf("%s", sname);
    printf("コピー先ファイル名: ");
    scanf("%s", dname);

    if((sfp = fopen(sname, "r") )== NULL) {
        printf("コピー元ファイルをオープンできません。\n");
    } else if ((dfp = fopen(dname, "w")) == NULL) {
        printf("コピー先ファイルをオープンできません。\n");
    }
    else if ((Bigfp = fopen("Big.txt", "w")) == NULL) {
        printf("Bigファイルをオープンできません。\n");
    }
    else if ((Smallfp = fopen("Small.txt", "w")) == NULL) {
        printf("Smallファイルをオープンできません。\n");
    }
    else {
        int ch;
        while ((ch = fgetc(sfp)) != EOF) {
            fputc(ch, dfp);
            putchar(ch);
            fputc(toBig(ch), Bigfp);
            fputc(toSmall(ch), Smallfp);
        }
        printf("コピー完了\n");

        fclose(sfp);
        fclose(dfp);
        fclose(Bigfp);
        fclose(Smallfp);
    }
    
    return 0;
}