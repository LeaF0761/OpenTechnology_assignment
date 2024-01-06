#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *rfp;
    FILE *wfp;
    double random[10] = {0.0};

    for (size_t i = 0; i < 10; i++)
    {
        random [i] = (double)rand() / (i+1);
    }

    if ((wfp = fopen("random.bin", "wb")) == NULL)
    {
        printf("ファイルをオープンできません。\n");
    }
    else
    {
        fwrite(random, sizeof(double), 10, wfp);
        fclose(wfp);
    }

    if ((rfp = fopen("random.bin", "rb")) == NULL)
    {
        printf("ファイルをオープンできません。\n");
    }
    else
    {
        double read[10] = {0.0};
        fread(read, sizeof(double), 10, rfp);
        for (size_t i = 0; i < 10; i++)
        {
            printf("%f\n", read[i]);
        }
        fclose(rfp);
    }
    
}