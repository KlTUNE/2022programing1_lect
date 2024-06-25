#include <stdio.h>

int main(int argc, const char* argv[]) {

  int a = 0, b = 0;

  printf("a? ");
  scanf("%d", &a);
  printf("b? ");
  scanf("%d", &b);

  if (a < 0 || a == 0) printf("D\n");
  else if (b == 0) printf("A\n");
  else if (b > 0) printf("B\n");
  else printf("C\n");
  return 0;
}