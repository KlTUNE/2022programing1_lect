#include <stdio.h>

int main(int argc, const char * argv[]){
    char inputText[21]={'\0'}, palindrome[21]={'\0'};
    int isPalindrome=0, j=0;

    printf("input(20文字以下):");
    scanf("%s",inputText);

    for(int i=0;inputText[i]!='\0';i++){
        j = i + 1;
    }

    for(int i=0;i<j;i++){
        palindrome[i] = inputText[j - i - 1];
    }

    palindrome[j] = 0;

    for(int i=0;i<j-1;i++){
        if(palindrome[i] != inputText[i]){
            isPalindrome = 1;
        }
    }

    if(isPalindrome == 0){
        printf("回文OK\n");
    }
    else if(isPalindrome == 1){
        printf("回文NG\n");
    }

    return 0;
}