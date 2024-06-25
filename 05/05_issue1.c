#include <stdio.h>

int main(int argc, const char* argv[]){
    int num;

    printf ("x? ");
    scanf ("%d",&num);

    if (num == 0){
        printf ("2の倍数ではありません\n");
    }
    else if (num % 2 == 0){
        printf ("2の倍数です\n");
    }
    else {
        printf ("2の倍数ではありません\n");
    }

    if (num == 0){
        printf ("3の倍数ではありません\n");
    }
    else if (num % 3 == 0){
        printf ("3の倍数です\n");
    }
    else {
        printf ("3の倍数ではありません\n");
    }

    return 0;
}