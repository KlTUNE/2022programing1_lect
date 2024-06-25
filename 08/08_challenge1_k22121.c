#include<stdio.h>

int main(int argc, const char* argv[]){
    int n,i=2;

    printf("input? ");
    scanf("%d", &n);

    while(i < n){
        while(n%i == 0){
            printf("%d, ",i);
            n = n / i;
        }
         i = i + 1;
    }
    printf("%d\n",i);

    return 0;
}