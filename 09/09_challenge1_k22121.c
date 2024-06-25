#include <stdio.h>

int main(int argc, const char* argv[]) {
    char ch;
    int answer=0, inputNumber, isMinus=2;

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
                break;
            default:
                inputNumber = (int)ch - 48;

                if (isMinus == 0){
                    answer = answer + inputNumber;
                }
                else if (isMinus == 1){
                    answer = answer - inputNumber;
                }
                break;
        }
    }

    if (isMinus == 2){
        answer = inputNumber;
    }

    printf ("answer: %d\n",answer);

    return 0;
}