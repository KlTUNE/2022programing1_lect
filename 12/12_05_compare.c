#include <stdio.h>

int main(int argc, const char* argv[]) {
  int a=0, b=0;

  printf("a b? ");
  scanf("%d %d", &a, &b);

  printf("大きい方の値は ");

  if (a>b){
    printf("%d\n", a);
  }
  else{
    printf("%d\n", b);
  }

  return 0;
}