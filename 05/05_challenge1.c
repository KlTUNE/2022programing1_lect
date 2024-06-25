#include <stdio.h>

int main(int argc, const char* argv[]){
    int dayOfWeek, time, isOpen;

    printf ("0:日\n1:月\n2:火\n3:水\n4:木\n5:金\n6:土\n曜日? ");
    scanf ("%d", &dayOfWeek);
    if (dayOfWeek > 6){
        printf ("0~6までの数値を入力してください。\n");
        printf ("0:日\n1:月\n2:火\n3:水\n4:木\n5:金\n6:土\n曜日? ");
        scanf ("%d", &dayOfWeek);
    }

    printf ("0:09:00 ~ 12:00\n1:13:00 ~ 16:00\n時間帯? ");
    scanf ("%d", &time);
    if (time > 1){
        printf ("0~1までの数値を入力してください。\n");
        printf ("0:09:00 ~ 12:00\n1:13:00 ~ 16:00\n時間帯? ");
        scanf ("%d", &time);
    }

    if (dayOfWeek == 0 || dayOfWeek == 6){
        if (dayOfWeek == 6){
            if (time == 1){
                printf ("診察を行っています\n");
            }
            else {
                printf ("診察は行っていません\n");
            }
        }
        else {
            printf ("診察は行っていません\n");
        }
    }
    else {
        if (dayOfWeek == 3){
            if (time == 0){
                printf ("診察を行っています\n");
            }
            else {
                printf ("診察は行っていません\n");
            }
        }
        else {
            printf ("診察を行っています\n");
        }
    }

    return 0;
}