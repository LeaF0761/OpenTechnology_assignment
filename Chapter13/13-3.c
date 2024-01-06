#include <stdio.h>

struct parsonal_data
{
    char name[100];
    double height;
    double weight;
}typedef parsonal_data;

#define Data_Limit 100
int main(void)
{
    FILE *fp;
    if((fp = fopen("hw.txt", "r")) == NULL) {
        printf("ファイルをオープンできません。\n");
    } else {

        parsonal_data data[Data_Limit];
        int ninzu = 0;
        while (fscanf(fp, "%s%lf%lf", data[ninzu].name, &data[ninzu].height, &data[ninzu].weight) == 3)
        {
            ninzu++;
        }
        
        printf("--------------------\n");
        printf("身長昇順ソート\n");
        for (int i = 0; i < ninzu; i++)
        {
            for (int j = i + 1; j < ninzu; j++)
            {
                if (data[i].height > data[j].height)
                {
                    parsonal_data temp = data[i];
                    data[i] = data[j];
                    data[j] = temp;
                }
            }
        }
        for (int i = 0; i < ninzu; i++)
        {
            printf("%-10s %5.1f %5.1f\n", data[i].name, data[i].height, data[i].weight);
        }
        fclose(fp);
    }
    return 0;
}