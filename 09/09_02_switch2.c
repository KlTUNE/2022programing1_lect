#include <stdio.h>

int main(int argc, const char* argv[]) {
  char ch = 0;

  printf("text? ");

  while ((ch = getchar()) != '\n') {
    switch (ch) {
      case ' ':
        putchar('\n');
        break;
      default:
        putchar(ch);
        break;
    }
  }

  printf("\n");

  return 0;
}