#include <stdio.h>

int main() {

    for (float i = 0.0; i < 1.0; i += 0.01) {
        printf("%f\n", i);
    }

    float x;
    printf("\n");
    for (int i = 0; i < 100 ; i++)
    {
        x = i / 100.0;
        printf("%f\n", x);
    }
    
    
    return 0;
}
