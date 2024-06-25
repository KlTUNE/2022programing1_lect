#include <stdio.h>

int main(int argc, const char* argv[]) {
    int n = 100, i, j, count;

    for(i=2;i<=n;++i) {
        count = 0;

        for(j=2;j<i;++j){
            if(i%j == 0){
                count = 1;
                break;
            }
        }

        if(count == 0){
            printf("%d, ", i);
        }
    }

  return 0;
}
