#include <stdio.h>

#define NAME_LEN 64
struct Student {
    char name[NAME_LEN];
    int height;
    double weight;
};

int main() {
    struct Student takao = {"Takao", 173};

    printf("名前のアドレス: %p\n", &takao.name);
    printf("身長のアドレス: %p\n", &takao.height);
    printf("体重のアドレス: %p\n", &takao.weight);

    return 0;
}
