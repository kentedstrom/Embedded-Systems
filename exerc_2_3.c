#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int checkStrings(char string1[], char string2[]){
    int i = 0;
    if (strlen(string1) != strlen(string2)){
        printf("Strings are not the same due to length");
        return 0;
    }
    for (int i = 0; i < strlen(string1); i++){
        if (!(string1[i] == string2[i])){
            printf("Strings are not the same due to character array");
            return 0;
        }
    }
    printf("Strings are the same according to checkstrings method");
    return 1;
}

int main(int argc, char **argv) {

    if (argc == 3) {
        checkStrings(argv[1],argv[2]);
        if (strcmp(argv[1], argv[2]) == 0){
          printf("Strings are the same");
        }
        else {
            printf("Strings are not the same");
        }




    }


}