#include <time.h>
#include <stdio.h>

char data_file[] = "datatime.dat";

void get_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "r")) == NULL)
    {
        printf("本プログラムを実行するのは初めてですね。\n");
    } else {
        int year, month, day, hour, minute, second;
        char feeling[100];
        
        fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &hour, &minute, &second, feeling);
        printf("前回の実行は%d年%d月%d日%d時%d分%d秒です。その時の気分は%sでした。\n", year, month, day, hour, minute, second, feeling);
        fclose(fp);
    }    
}
void put_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "w")) == NULL)
    {
        printf("ファイルをオープンできません。\n");
    } else {
        time_t current = time(NULL);
        char feeling[100];
        printf("今の気分は？\n");
        scanf("%s", feeling);
        struct tm *timer = localtime(&current);
        fprintf(fp, "%d %d %d %d %d %d %s\n", timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday, timer->tm_hour, timer->tm_min, timer->tm_sec, feeling);
        fclose(fp);
    }
}

int main(void)
{
    get_data();
    put_data();
    return 0;
}