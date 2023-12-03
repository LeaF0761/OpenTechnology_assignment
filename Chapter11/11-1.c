#include <stdio.h>

int main(void)
{
  char *p = "123";
    printf("p=%s\n", p);

  p = "456"+1;
    printf("p=%s\n", p);

}

//ポインタがさすアドレスが一つ増えるから5から表示される
//警告される
