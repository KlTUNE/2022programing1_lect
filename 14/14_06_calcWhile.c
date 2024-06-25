#include <stdio.h>

int main(int argc, const char* argv[]) {
  int n=0, sum=0, count=0;

  printf("n? ");
  scanf("%d", &n);

  while (count<=n){
    sum += count++;
  }

  printf("1から%dまでの和は %d\n", n, sum);

  return 0;
}