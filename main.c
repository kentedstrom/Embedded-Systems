#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

#define MAX 99

void integerArray(){
    int array[MAX];
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        array[i] = rand() % 100;
    }
    printf("The value of the label array is: %p \n", &array);
    printf("First integer in the array is: %d \n", array[0]);
    printf("The size of an integer is: %d \n", sizeof(array[0]));
    printf("The size of the whole array is: %d \n", sizeof(array));

    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        printf("Integer value: %d, double value: %0.1f \n", array[i], (double)array[i]);
    }
}
int checkStrings(char string1[], char string2[]){
   int i = 0;
   if (strlen(string1) != strlen(string2)){
       return 0;
   }
   for (int i = 0; i < sizeof(string1) / sizeof(string1[0]); i++){
       if (!string1[i] == string2[i]){
           return 0;
       }
   }
   return 1;
}

int main(int argc, char **argv) {
    //copyString();
    //integerArray();
    if (argc == 3) {
        printf("/d", checkStrings(argv[1], argv[2]));
    }
}