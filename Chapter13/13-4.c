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
    if((fp = fopen("hw_w.txt", "w")) == NULL) {
        printf("ファイルをオープンできません。\n");
    } else {
        printf("何人分のデータを入力しますか？\n");
        int ninzu;
        scanf("%d", &ninzu);
        for (int i = 1; i <= ninzu; i++)
        {
            parsonal_data data;
            printf("No.%d\n", i);
            printf("名前を入力してください。\n");
            scanf("%s", data.name);
            printf("身長を入力してください。\n");
            scanf("%lf", &data.height);
            printf("体重を入力してください。\n");
            scanf("%lf", &data.weight);
            fprintf(fp, "%-10s %5.1f %5.1f\n", data.name, data.height, data.weight);
            printf("--------------------\n");
        }        
        fclose(fp);
    }
    return 0;
}