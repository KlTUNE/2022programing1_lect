#include <stdio.h>

int main(int argc, const char* argv[]) {
    char ch;
    int answer=0, isMinus=2, keta=1, inputNumber=0;

    printf ("equation? ");

    while ((ch = getchar()) != '='){
        switch (ch) {
            case '+':
                if (isMinus == 2){
                    answer = inputNumber;
                }

                isMinus = 0;
                break;
            case '-':
                if (isMinus == 2){
                    answer = inputNumber;
                }

                isMinus = 1;
                break;
            case ' ':
                if (keta == 10){
                    if (isMinus == 0){
                        answer = answer + inputNumber;
                        isMinus = 3;
                    }
                    else if (isMinus == 1){
                        answer = answer - inputNumber;
                        isMinus = 3;
                    }
                }

                if (isMinus != 2){
                    inputNumber=0;
                }

                keta = 1;
                break;
            default:
                inputNumber = inputNumber * keta + ((int)ch - 48);
                keta = 10;
                break;
        }
    }

    if (isMinus == 2){
        answer = inputNumber;
    }

    printf ("answer: %d\n",answer);

    return 0;
}