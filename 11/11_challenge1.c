#include <stdio.h>

int main(int argc, const char* argv[]) {
    char paragraph[209] = "we hold these truths to be self-evident, that all men are created "
                       "equal, that they are endowed by their creator with certain unalienable "
                       "rights, that among these are life, liberty and the pursuit of "
                       "happiness.";
    char searchTerm[13];
    int i, ii=0, j=0, index=-1;

    printf ("searchTerm: ");
    scanf ("%s",searchTerm);

    for (i=0;i<209;i++){
        if (paragraph[i] == searchTerm[j]){
            if (j == 0){
                j += 1;
                index = i;
            }
            else if (i == ii+1){
                j += 1;
                if (searchTerm[j] == '\0'){
                    break;
                }
            }
            ii = i;
        }
        else if (paragraph[i] != searchTerm[j]){
            j = 0;
            index = -1;
        }
    }

    printf ("indexOf: %d\n",index);

    return 0;
}