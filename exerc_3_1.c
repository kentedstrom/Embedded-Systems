#include <stdio.h>

enum DIRECTION {N,E,S,W};

typedef struct {
    int xpos;
    int ypos;
    enum DIRECTION dir;
} ROBOT;

void move(ROBOT *rob){

}

void turn(ROBOT *rob){
    if(rob->dir == 3){
        rob->dir = 0;
    } else{
        rob->dir++;
    }
}

void performInstructions(ROBOT *rob, char inputs[], int inputSize){
    for(int i = 0; i < inputSize; i++){
        if(inputs[i] == 'm'){
            move(&rob);
        } else if(inputs[i] == 't'){
            turn(&rob);
        }
    }
}

int main(){
    ROBOT rob;
    int x, y, dir;
    printf("Enter the start position for the robot on the x axis (0-99)\n");
    scanf("%d", &x);
    fflush(stdin);
    printf("Enter the start position for the robot on the y axis (0-99)\n");
    scanf("%d", &y);
    fflush(stdin);
    printf("Enter the start direction for the robot (0-3)\n");
    scanf("%d", &dir);
    fflush(stdin);

    rob.xpos = x;
    rob.ypos = y;
    rob.dir = dir;

    printf("The starting position of the robot is (%d, %d) and facing %d\n", rob.xpos, rob.ypos, rob.dir);
    printf("Enter a set of moves (t and m)\n");

    char inputs[2];

    fgets(inputs, 2, stdin);
    while ((getchar()) != '\n');
    for(int i = 0; i < 2; i++){
        printf("here %c\n", inputs[i]);
    }

    performInstructions(&rob, inputs, sizeof(inputs) / sizeof(inputs[0]));

    printf("Robot position is now X:%d Y:%d\n", rob.xpos, rob.ypos);

    return 0;
}