#include <stdio.h>

int main(int argc, const char* argv[]) {
  int x = 0, y = 0, temp = 0;

  printf("x y? ");
  scanf("%d %d", &x, &y);

  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }

  printf("%d %d\n", x, y);

  return 0;
}