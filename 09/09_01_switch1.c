#include <stdio.h>
#include <unistd.h>

int main(int argc, const char* argv[]) {
  int n = 0;

  printf("n? ");
  scanf("%d", &n);

  switch (n) {
    case 1:
      printf("AAA\n");
      break;
    case 2:
      printf("BBB\n");
      break;
    default:
      printf("Defaultです.\n");
      break;
  }
  sleep(5);
  return 0;
}