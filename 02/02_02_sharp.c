//
//  01_01_helloworld.c
//  prg1
//
//  Created by Yuya Masaki on 2022/04/14.
//

#include <stdio.h>

int main(int argc, const char * argv[]){
    for (int i = 0;i<5;i++){
        for (int j = 0;j<5;j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
