#include <stdio.h>

int printMainMenu(int operation){
	printf("---------------\nOPERATIONS:\n---------------\n1. Seat Info\n2. Update Prices\n3. Sell a ticket\n4. Current cash info\n5. Quit\n");
	printf("\n Select your operation : ");
	scanf("%d", &operation);
	printf("\n******************************************\n");
	
	return operation;
}

void printSeatInformation(int a, int b, int c, int d){
	printf("Current Seat Information :\n Level A : %d\n Level B : %d\n Level C : %d\n Level D : %d\n", a, b, c, d);
	printf("\n******************************************\n");
}

void printTicketPrices(int a, int b, int c, int d){
	printf("Current Price Information :\n Level A : %d\n Level B : %d\n Level C : %d\n Level D : %d", a, b, c, d);
	printf("\n******************************************\n");
}

void printCashInfo(int currentCash){
    printf("Current cash information : %d\n", currentCash);
}

int seatControl(char seatInfo, int numberOfSold, int stock){
	if(numberOfSold > stock){
        printf("SORRY… Level %c tickets are out of stock.\n", seatInfo);
        printf("\n******************************************\n");
        return 0;
    }
    else{
        printf("%d Seats from Level %c is sold\n", numberOfSold, seatInfo);
        printf("\n******************************************\n");
        return 1;
    }

}

int updatePrices(char seatInfo, int newPrice){
	printf("Enter new price for Level %c:", seatInfo);
    scanf("%d", &newPrice);
    printf("Level %c ticket price is updated to %d\n", seatInfo, newPrice);
    printf("\n******************************************\n");

    return newPrice;
}

int sell(char seatInfo, int numberOfTickets){
	printf("Enter number of tickets for Level %c seat : ", seatInfo);
    scanf("%d", &numberOfTickets);

    return numberOfTickets;
}

int CalculateBill(int tickectPrice, int numberOfSold){
    int bill = numberOfSold * tickectPrice;
    printf("Your bill is %d * %d = %d TL.\n", numberOfSold, tickectPrice, bill);
    printf("\n******************************************\n");
    return bill;

}

int main(){
	int operation, currentCash = 50, newPrice, numberOfSold, bill, control, priceOfA = 100, priceOfB = 80, priceOfC = 60, priceOfD = 40, amountOfA = 40, amountOfB = 40, amountOfC = 40, amountOfD = 40;
	char seatInfo;

    //printf("Enter the amount of cash you have:");
    //scanf("%d", &currentCash);
	
	do{
		operation = printMainMenu(operation);
			
		if(operation == 1){
			printSeatInformation(amountOfA, amountOfB, amountOfC, amountOfD);
			printTicketPrices(priceOfA, priceOfB, priceOfC, priceOfD);
		}
		
		else if(operation == 2){
            printTicketPrices(priceOfA, priceOfB, priceOfC, priceOfD);
            operation = 1;
            do
            {
                if(operation == 2){
                    break;
                }

                printf("Select level to update : ");
                scanf(" %c", &seatInfo);

                if (seatInfo == 'A'|| seatInfo == 'a'){
                    priceOfA = updatePrices(seatInfo, priceOfA);
                }

                else if (seatInfo == 'B'|| seatInfo == 'b'){
                    priceOfB = updatePrices(seatInfo, priceOfB);
                }

                else if (seatInfo == 'C' || seatInfo == 'c'){
                    priceOfC = updatePrices(seatInfo, priceOfC);
                }

                else if (seatInfo == 'D' || seatInfo == 'd'){
                    priceOfD = updatePrices(seatInfo, priceOfD);
                }

                else{
                    printf("Please enter a valid level name!\n");
                }

                printTicketPrices(priceOfA, priceOfB, priceOfC, priceOfD);   

                printf("OPERATIONS :\n——————————————\n1. Continue to update price\n2. Return main menu\n");
                printf("Select your operation :");
                scanf("%d", &operation);

            } while (operation == 1 || operation != 2);
		}
		
		else if(operation == 3){
			    printSeatInformation(amountOfA, amountOfB, amountOfC, amountOfD);
			    printTicketPrices(priceOfA, priceOfB, priceOfC, priceOfD);
                operation = 1;
            do
            {
                if(operation == 2){
                    break;
                }
                
                printf("Select level : ");
                scanf(" %c", &seatInfo);
                

                if (seatInfo == 'A'|| seatInfo == 'a'){
                    numberOfSold = sell(seatInfo, numberOfSold);
                    control = seatControl(seatInfo, numberOfSold, amountOfA);
                    if (numberOfSold >= amountOfA){                            
                        bill = CalculateBill(priceOfA, amountOfA);
                        amountOfA = 0;
                        currentCash += bill;
                    }
                    if (control == 1){   
                        amountOfA -= numberOfSold;
                        bill = CalculateBill(priceOfA, numberOfSold);
                        currentCash += bill;                                                                     
                    }
                }

                else if (seatInfo == 'B'|| seatInfo == 'b'){
                    numberOfSold = sell(seatInfo, numberOfSold);
                    control = seatControl(seatInfo, numberOfSold, amountOfB);

                    if (numberOfSold >= amountOfB){                            
                        bill = CalculateBill(priceOfB, amountOfB);
                        amountOfB = 0;
                        currentCash += bill;  
                    }
                    if (control == 1){  
                        amountOfB -= numberOfSold;
                        bill = CalculateBill(priceOfB, numberOfSold);
                        currentCash += bill;                           
                    }
                }

                else if (seatInfo == 'C' || seatInfo == 'c'){            
                    numberOfSold = sell(seatInfo, numberOfSold);        
                    control = seatControl(seatInfo, numberOfSold, amountOfC);
                    if (numberOfSold >= amountOfC){                        
                        bill = CalculateBill(priceOfB, amountOfC);
                        amountOfC = 0;
                        currentCash += bill;  
                    }
                    if (control == 1){
                            amountOfC -= numberOfSold;
                            bill = CalculateBill(priceOfC, numberOfSold);
                            currentCash += bill;    
                    }
                }

                else if (seatInfo == 'D' || seatInfo == 'd'){ 
                    numberOfSold = sell(seatInfo, numberOfSold);                   
                    control = seatControl(seatInfo, numberOfSold, amountOfD);
                    if (numberOfSold >= amountOfD){                            
                        bill = CalculateBill(priceOfB, amountOfD);
                        amountOfD = 0;
                        currentCash += bill;  
                    }
                    if (control == 1){ 
                            amountOfD -= numberOfSold;                
                            bill = CalculateBill(priceOfD, numberOfSold);
                            currentCash += bill;    
                    }
                }

                else{
                    printf("Please enter a valid level name!\n");
                }

                printSeatInformation(amountOfA, amountOfB, amountOfC, amountOfD);   

                printf("OPERATIONS :\n——————————————\n1. Continue to sell a ticket\n2. Return main menu\n");
                printf("Select your operation :");
                scanf("%d", &operation);            

            } while (operation == 1 || operation != 2);
		}
		
		else if(operation == 4){
			printCashInfo(currentCash);
		}
		
		else if(operation == 5){
            printCashInfo(currentCash);
			printf("Bye");
			break;
		}
		
		else{
			printf("Please enter a valid operation!\n");
		}		
		
	}while(operation != 5);
	
	return 0;
}