#include <stdlib.h>

#define MAX 100
#define MAXNUMBER 20

void create_random(int *table){
    for(int i = 0; i < MAX; i++){
        table[i] = rand() % MAXNUMBER;
    }
}

void count_frequency(int *table, int *freq){
    for(int i = 0; i < MAX; i++){
        freq[table[i]]++;
    }
}

void draw_histogram(int *freq){
    for(int i = 0; i < MAXNUMBER; i++){
        if(freq[i] != 0){
            printf("%d ", i);
            for(int j = 0; j < freq[i]; j++){
                printf("x");
            }
            printf("\n");
        }
    }
}


void testRun(){
    int table[MAX];
    int freq[MAXNUMBER] = {0};

    create_random(&table);
    count_frequency(&table, &freq);
    draw_histogram(&freq);
}

/*
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
}*/