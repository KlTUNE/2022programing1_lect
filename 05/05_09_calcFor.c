#include <stdio.h>

int main(int argc, const char* argv[]){
    int sum = 0;

    for (int i = 1; i < 11; i++){
        sum = sum + i;
    }

    printf ("%d\n",sum);

    return 0;
}