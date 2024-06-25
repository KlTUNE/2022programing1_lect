#include <stdio.h>

int main(int argc, const char* argv[]) {

  double width;
  double height;

  printf("width? ");
  scanf("%lf", &width);
  printf("height? ");
  scanf("%lf", &height);

  printf("area = %lf\n", width * height);
  return 0;
}