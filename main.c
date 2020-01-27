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


int main() {
    //copyString();
    integerArray();
}