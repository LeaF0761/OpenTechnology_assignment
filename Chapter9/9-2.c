#include <stdio.h>

int main(void){

    char s[] = "ABC";
    printf("文字列 sは \"%s\"です.\n", s);

    s[0] = '\0';
    //s[] = "\0";はできない
    printf("文字列 sは \"%s\"です.\n", s);

    //終文字入ってるのでDEFは表示されない 
    return 0;
    }