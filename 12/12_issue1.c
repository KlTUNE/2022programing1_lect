#include <stdio.h>

double factOf(int);

int main(int argc, const char* argv[]){
    int n;

    printf ("n? ");
    scanf ("%d",&n);

    printf ("%dの階乗は %.0lf\n",n ,factOf(n));

    return 0;
}

double factOf (int n){
    double kaijo=1;

    for (double i=n;i>1;i--){
        kaijo = kaijo * i;
    }

    return kaijo;
}