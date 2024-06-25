#include <stdio.h>

int main(int argc, const char* argv[]) {
    int height, weight;
    double standardWeight, bmi, Mheight;

    printf("height?");
    scanf("%d",&height);
    printf("weight?");
    scanf("%d",&weight);
    standardWeight = (height - 100) * 0.9;
    Mheight = height / 100;
    bmi = weight / Mheight * Mheight;
    printf("standardWeight = %lf\n",standardWeight);
    printf("bmi = %lf\n",bmi);

    return 0;
}