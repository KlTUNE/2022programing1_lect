#include<stdio.h>

int main(int argc, const char* argv[]){
    int n;

    printf("n? ");
    scanf("%d", &n);

    while( 0 <= n ){
        printf("%d\n", n);
        n--;
    }

    return 0;
}