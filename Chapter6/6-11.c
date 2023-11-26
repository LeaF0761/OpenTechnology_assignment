#include <stdio.h>

int search_idx(const int v[], int idx[], int key,int n ) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            idx[count] = i;
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("配列の要素数を入力: ");
    scanf("%d", &n);
    int v[n];
    printf("配列定義:\n");
    for (int i = 0; i < n; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }
    int key;
    printf("検索する値を入力してください: ");
    scanf("%d", &key);
    int idx[n];
    int count = search_idx(v, idx, key, n);
    printf("一致したkeyは%d個\n", count);
    for (int i = 0; i < count; i++) {
        printf("idx[%d] = %d\n", i, idx[i]);
    }
    return 0;
}