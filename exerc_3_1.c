#include <stdio.h>

enum DIRECTION {N,O,S,W};

typedef struct {
    int xpos;
    int ypos;
    enum DIRECTION dir;
} ROBOT;

void move(){

}

void turn(ROBOT *rob){
    //printf("%d", rob->xpos);
}

int main(){
    ROBOT *rob;
    rob->xpos = 42;
    rob->ypos = 21;
    rob->dir = 'N';

    turn(&rob);

    return 0;
}