#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int num, guess;
    srand(time(0));
    num=rand()%100 + 1;
    // printf("The number is %d\n",num);

    int guessno=1;
    do{
        printf("Guess the number between 1-100: ");
        scanf("%d",&guess);
        if(guess>num){
            printf("Lower number please\n");
        }
        else if(guess<num){
            printf("Higher number please\n");
        }
        else{
            printf("You guessed the right number in %d attempts\n",guessno);
        }
        guessno++;

    }while(guess!=num);
    //No matter what this will run for 1st time

    return 0;
}