#include <time.h>
#include <stdio.h>

char data_file[] = "datatime.dat";

void get_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "rb")) == NULL)
    {
        printf("本プログラムを実行するのは初めてですね。\n");
    } else {
        struct tm *loaddata;
        fread(loaddata, sizeof(struct tm), 1, fp);
        printf("前回の実行は%d年%d月%d日%d時%d分%d秒です.\n", loaddata->tm_year + 1900, loaddata->tm_mon + 1, loaddata->tm_mday, loaddata->tm_hour, loaddata->tm_min, loaddata->tm_sec);
        fclose(fp);
    }    
}
void put_data(void)
{
    FILE *fp;
    if ((fp = fopen(data_file, "wb")) == NULL)
    {
        printf("ファイルをオープンできません。\n");
    } else {
        time_t current = time(NULL);
        struct tm *timer = localtime(&current);
        fwrite(timer, sizeof(struct tm), 1, fp);
        fclose(fp);
    }
}

int main(void)
{
    get_data();
    put_data();
    return 0;
}