#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 3
#define MIN_NUM 1

int getComputerMove(){
    return rand() % (MAX_NUM - MIN_NUM + 1) + MIN_NUM; 
} 

void playrps(){
    int computerMove = getComputerMove();
    switch(computerMove){
        case 1:
            printf("rock\n");
            break;
        case 2:
            printf("paper\n");
            break;
        case 3:
            printf("scissors\n");
            break;
        default:
            printf("the range is from 1-3\n");

    }
}


int main(){
    srand(time(NULL));
    char ans;
    printf("press y to play or n to exit\n");
    scanf(" %c", &ans);
    while(ans == 'y'){
        playrps();

        printf("press y to play orn to exit\n");
        scanf(" %c", &ans);
    }
    return 0;
}
