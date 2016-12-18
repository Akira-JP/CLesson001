#include <stdio.h>
#include <stdlib.h>

vold main() {
  int a = 0;
  int b = 0;
  int ans = 0;

  printf("aに値を入力してください。。。");
  scanf("%d", a);

  printf("bに値を入力してください。。。");
  scanf("%d", b);

  ans = a + b;

  printf("合計は$%d", ans);
}
