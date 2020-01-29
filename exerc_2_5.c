#include <stdlib.h>

#define MAX 20
int array[MAX];
void fillArray(){
    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        array[i] = rand() % MAX;
    }}
    int findOccurences(int x) {
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        int occurrences = 0;
        if(x == array[i]){
            occurrences++;
        }
        return occurrences;
    }

    }
void printOccurences(){
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++){

    }
}