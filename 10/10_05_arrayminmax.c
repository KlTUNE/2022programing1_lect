#include <stdio.h>

int main(int argc, const char* argv[]) {
  int heights[5] = {0};
  int max = 0, min = 0;

  for (int i = 0; i < 5; i++) {
    printf("%d人目の身長? ", i + 1);
    scanf("%d", &heights[i]);
  }

  max = min = heights[0];

  for (int i = 0; i < 5; i++) {
    if (max < heights[i]){
        max = heights[i];
    }
    else if (min > heights[i]){
      min = heights[i];
    }
  }

  printf("最小身長は %d\n", min);
  printf("最大身長は %d\n", max);

  return 0;
}