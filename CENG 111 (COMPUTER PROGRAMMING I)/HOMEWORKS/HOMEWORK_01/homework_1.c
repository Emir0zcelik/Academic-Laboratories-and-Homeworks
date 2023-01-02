#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int spaceTrack;

    do
    {
        printf("*****Welcome to Space Track Platform******\n1. Play the Number Guessing Game\n2. Play the Dice Game\n3. Exit\nChoose what to do (1,2,3):");
        scanf("%d", &spaceTrack);

        if (spaceTrack == 1){
            char select;
            int number, guess, question, countGuess = 0, countQuestion = 0;
            number = rand() % 100 + 1;
            printf("*****Welcome to Number Guessing Game******\n");

            do
            {
                printf("Make guess or Ask a question (Input M or A):");
                scanf(" %c", &select);

                if (select == 'M' || select == 'm'){
                    countGuess++;
                    printf("Make your best guess for the number between 1-100:");
                    scanf("%d", &guess);

                    if (guess > number){
                        printf("It is lower than the number.\n");
                    }
                    else if (guess < number){
                        printf("It is higher than the number.\n");
                    }
                }
                else if (select == 'A' || select == 'a'){
                    countQuestion++;
                    printf("Questions to ask:\n1. Is it even or odd?\n2. Is it >50?\n");
                    printf("Choose question:");
                    scanf("%d", &question);

                    if (question == 1){
                       if (number % 2 == 0){
                            printf("Number is even!\n");
                       }

                       else{
                            printf("Number is odd!\n");
                       }
                                    
                    }

                    else if (question == 2){
                        if(number <= 50){
                            printf("Number is not >50\n");
                        }

                        else{
                            printf("Number is >50\n");
                        }       
                    }

                    else{
                        printf("Please enter a valid input!\n");
                    }
                    
                    
                }
                else{
                    printf("Please enter a valid input!\n");
                }

            } while (guess != number);
            printf("Congratulations!! You guessed the number correctly!!!!\n");
            printf("You have made %d guesses, you asked %d questions.", countGuess,countQuestion);
        }

        else if (spaceTrack == 2){
            printf("*****Welcome to Dice Game******\n");
            printf("Game starts*+*+*+*+*+*+\n");

            int sumOfP1 = 0;
            int sumOfP2 = 0;
            int numThrows = 0;
            int i, p1dice1, p1dice2, p2dice1, p2dice2;
            

            do
            {
                p1dice1 = rand() % 6 + 1;
                p1dice2 = rand() % 6 + 1;

                printf("\nThrow the dice for player 1: %d %d", p1dice1, p1dice2);
                numThrows++;

                if(abs(p1dice1 - p1dice2) == 4){
                    do
                    {
                        p1dice1 = rand() % 6 + 1;
                        p1dice2 = rand() % 6 + 1;
                        printf("\nThrow the dice for player 1: %d %d", p1dice1, p1dice2);
                        numThrows++;
                    }while(p1dice1 + p1dice2 < 8);
                }

                if(p1dice1 != 6 && p1dice2 != 6){
                    sumOfP1 = sumOfP1 + (p1dice1 + p1dice2) / 2;
                }
                if((p1dice1 == 3 && p1dice2 == 3) || (p1dice1 == 6 && p1dice2 == 6)){

                    for(i = 0; i < 3; i++){

                        p1dice1 = rand() % 6 + 1;
                        p1dice2 = rand() % 6 + 1;

                        printf("\nThrow the dice for player 1: %d %d", p1dice1, p1dice2);
                        numThrows++;

                        if(p1dice1 != p1dice2){
                            sumOfP1 = sumOfP1 + (p1dice1 + p1dice2) / 2;
                        }
                    }
                }



                p2dice1 = rand() % 6 + 1;
                p2dice2 = rand() % 6 + 1;

                printf("\nThrow the dice for player 2: %d %d", p2dice1, p2dice2);
                numThrows++;

                if(abs(p2dice1 - p2dice2) == 4){

                    do
                    {
                        p2dice1 = rand() % 6 + 1;
                        p2dice2 = rand() % 6 + 1;

                        printf("\nThrow the dice for player 2: %d %d", p2dice1, p2dice2);
                        numThrows++;

                    }while(p2dice1 + p2dice2 < 8);
                }

                if(p2dice1 != 6 && p2dice2 != 6){
                    sumOfP2 = sumOfP2 + (p2dice1 + p2dice2) / 2;
                }

                if((p2dice1 == 3 && p2dice2 == 3) || (p2dice1 == 6 && p2dice2 == 6)){
                    
                    for(i = 0; i < 3; i++){

                        p2dice1 = rand() % 6 + 1;
                        p2dice2 = rand() % 6 + 1;

                        printf("\nThrow the dice for player 2: %d %d", p2dice1, p2dice2);
                        numThrows++;

                        if(p2dice1 != p2dice2){
                            sumOfP2 = sumOfP2 + (p2dice1 + p2dice2) / 2;
                        }                            
                    }
                }

            }while (p1dice1 + p1dice2 != 2*(p2dice1 + p2dice2));

            printf("\nPlayer 1: %d points", sumOfP1);
            printf("\nPlayer 2: %d points", sumOfP2);
            printf("\nTotal of %d throws are performed.", numThrows);

            if(sumOfP1 < sumOfP2){
                printf("\nWinner is: Player 2\n");
            }
            else if(sumOfP1 > sumOfP2){
                printf("\nWinner is: Player 1\n");
            }
            
            else{
                printf("\nPoints are equal, there are no winner!\n");
            }
            
        }
        
        else if (spaceTrack == 3){
             printf("Bye!");
        }
         
        else{
            printf("Please enter a valid input!\n");
        }
        
    } while (spaceTrack != 3);
    
    return 0;
}