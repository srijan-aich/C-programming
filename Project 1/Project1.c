#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_no; 
    do{
        printf("Enter your guess: ");
        scanf("%d", &guessed_no);
        if(guessed_no>random_number){
            printf("Lower no pls\n");
        }
        else if(guessed_no<random_number){
            printf("Higher no pls\n");
        }
        no_of_guesses++;

    }while(guessed_no != random_number);
    printf("You guessed the number in %d guesses!\n", no_of_guesses);
    return 0;
}