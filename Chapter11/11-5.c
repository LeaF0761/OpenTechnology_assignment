#include <stdio.h>

char *strncat(char *s1, const char *s2, size_t n) {
    char *temp = s1;
    while (*temp)
    {
        temp++;
    }

    while (*s2)
    {
        if (n <= 0) break;
        *temp = *s2;
        temp++;
        s2++;
        n--;
    }
    *temp = '\0';
    return s1;

}

int main(void)
 {
    char str[128] = "ABC";
    char str2[128] = "DEF";
    char *result = strncat(str, str2, 1);
    printf("cat: %s\n", result);
    char *result2 = strncat(str, str2, 4);

    printf("cat: %s\n", result2);
    
    return 0;
}
