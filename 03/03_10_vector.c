#include <stdio.h>

int main(int argc, const char* argv[]) {
  int a,b;
  printf("(a, b)? ");
  scanf("(%d, %d)", &a, &b);
  printf("(%d, %d) => (%d, %d)\n",a,b,2*a,2*b);
}