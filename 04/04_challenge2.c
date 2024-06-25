#include <stdio.h>

int main(int argc, const char* argv[]){
    int total, legs, crane, tortoise;

    printf("total?");
    scanf("%d",&total);
    printf("legs?");
    scanf("%d",&legs);

    if (legs % 2 == 1){
        printf("cannot be combined\n");
    }
    else{
        tortoise = legs / 2 - total;
        crane = total - tortoise;
        printf("crane = %d, tortoise = %d\n",crane, tortoise);
    }

    return 0;
}