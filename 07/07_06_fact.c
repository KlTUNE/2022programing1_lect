#include <stdio.h>

int main(int argc, const char* argv[]) {
  int x = 0, n = 0, result;

  printf("x n? ");
  scanf("%d %d", &x, &n);

  result = x;

  for (int i = 1; i < n; i++) result *= x;
  printf("%d^%d = %d\n", x, n, result);
  return 0;
}