#include <stdio.h>

int main(void){

    char str[] = "ABC\0DEF";
    printf("文字列 strは \"%s\"です.\n", str);

    //終文字入ってるのでDEFは表示されない 
    return 0;
    }
