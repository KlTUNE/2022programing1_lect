#include <stdio.h>

int main(int argc, const char* argv[]) {
  int x = 0, y = 0, z = 0, temp = 0;

  printf("x y z? ");
  scanf("%d %d %d", &x, &y, &z);

  if (x > y) {
    temp = x;
    x = y;
    y = temp;
  }
  if (x > z) {
    temp = x;
    x = z;
    z = temp;
  }
  if (y > z) {
    temp = y;
    y = z;
    z = temp;
  }

  printf("%d %d %d\n", x, y, z);

  return 0;
}