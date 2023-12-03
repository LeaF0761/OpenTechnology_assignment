#include <stdio.h>

//うるうチェック
int isUruU(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void decrement_date(int *year, int *month, int *day) 
{
    int days_in_month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if (isUruU(*year)) {
        days_in_month[1] = 29;
    }
    
    (*day)--;
    if (*day < 1) {
        (*month)--;
        if (*month < 1) {
            (*year)--;
            *month = 12;
        }
        *day = days_in_month[*month - 1];
    }
}

void increment_date(int *year, int *month, int *day) 
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isUruU(*year)) {
        days_in_month[1] = 29;
    }
    (*day)++;
    if (*day > days_in_month[*month - 1]) {
        (*month)++;
        if (*month > 12) {
            (*year)++;
            *month = 1;
        }
        *day = 1;
    }
}

int main() {
    int year = 2022;
    int month = 7;
    int day = 31;
    
    printf("今日: %d年%d月%d日\n", year, month, day);
    
    decrement_date(&year, &month, &day);
    printf("前の日: %d年%d月%d日\n", year, month, day);
    
    increment_date(&year, &month, &day);
    printf("昨日の次の日: %d年%d月%d日\n", year, month, day);
    
    return 0;
}
