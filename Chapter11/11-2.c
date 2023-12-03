#include <stdio.h>

int main(void)
{
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    

    int count = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < count; i++)
    {
        printf("a[%d] = \"%s\"\n", i, a[i]);
    }

    int count1 = sizeof(p) / sizeof(p[0]);
    for (int i = 0; i < count1; i++)
    {
        printf("p[%d] = \"%s\"\n", i, p[i]);
    }
    

}