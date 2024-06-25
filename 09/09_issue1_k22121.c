#include <stdio.h>

int main(int argc, const char* argv[]) {
    int a[3], b[3], i;

    for (i=0;i<3;i++){
        printf ("a[%d]? ",i);
        scanf ("%d",&a[i]);
    }

    for (i=0;i<3;i++){
        printf ("b[%d]? ",i);
        scanf ("%d",&b[i]);
    }

    for (i=0;i<3;i++){
        printf ("a[%d] - b[%d] = %d\n",i,i,a[i]-b[i]);
    }

  return 0;
}