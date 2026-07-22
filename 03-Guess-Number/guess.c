#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int secretNumber = rand()%10+1;
    int guess;

    printf("===GUESS THE NUMBER (1-10)===\n");

    while(1) {
        printf ("Enter your guess: ");
        scanf("%d",&guess);

        if(guess>secretNumber) {
            printf("Too High! Try Again!\n");
        }else if (guess<secretNumber){
            printf("Too Low! Try Again!\n");
        }else {
            printf("Correct! The number was %d\n",secretNumber);
            break;
    
        }
    }
}
