#include <stdio.h>

int main(int argc, const char* argv[]){
    int num, Rnum, H, T, O;

    printf("x?");
    scanf("%d",&num);

    if (num >=1000){
        printf("３桁までです");
    }
    else{
        H = num / 100;
        T = (num / 10) - (H * 10);
        O = num - ((H * 100) + (T * 10));
        Rnum = (O * 100) + (T * 10) + H;
        printf("reverse x = %0.3d\n",Rnum);
    }

    return 0;
}