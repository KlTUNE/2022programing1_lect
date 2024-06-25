#include <stdio.h>
#include <limits.h>

int main(int argc, const char* argv[]) {
  int x = 0;
  int max = INT_MIN;

  for (int i = 0; i < 5; i++) {
    printf("%d? ",i+1);
    scanf("%d", &x);
    if (x > max) max = x;
  }

  printf("max=%d\n", max);

  return 0;
}