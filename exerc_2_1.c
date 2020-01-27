#include <stdio.h>
#include <string.h>




void copyString(){
    char copied[21];
    char input[sizeof copied];
    char libraryCopy[sizeof copied];
    fgets(input, sizeof input, stdin);
    strcpy(libraryCopy, input);
    for (int i = 0; i < sizeof input ; i++){
        copied[i] = input[i];

    }
    printf("%s \n", copied );
    printf("%s", libraryCopy);
}


int main() {
copyString();
}