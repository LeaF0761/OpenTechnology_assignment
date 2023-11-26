#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main() {
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;

    int ma1 = MAX(MAX (a, b), MAX(c, d));
    int ma2 = MAX(MAX(MAX(a, b),c),d);
    // ma1には、aとbの最大値とcの最大値の最大値が代入される
    //（（aとbの最大値）とcの最大値の最大値）とdの最大値の最大値がma2に代入される
    
    return 0;
}
