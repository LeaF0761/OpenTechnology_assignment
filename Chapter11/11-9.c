#include <stdio.h>

char* str_char(const char *s, char c) {
   char *index = NULL;
   while (*s)
   {
       if (*s == c) {
        index = s;
        break;

       }
         s++;
   }
   
    return index;
}

int main() {
    const char s[] = "ABC";
    char c = 'B';
    char c2 = 'D';
    char *index = str_char(s, c);
    char *index2 = str_char(s, c2);
    printf("Index: %s\n", index);
    printf("Index2: %s\n", index2);
    return 0;
}