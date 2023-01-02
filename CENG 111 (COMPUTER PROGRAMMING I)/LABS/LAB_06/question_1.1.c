#include <stdio.h>

int main(){
	char fruitType;
	int totalCost, amount;
	
	printf("What type of fruit you would like to have? (enter a for apples, b for bananas and c for carrots)\n");
	scanf("%c", &fruitType);
	
	if(fruitType == 'a' || fruitType == 'A')
	{
		printf("How many of that item you would like to buy?\n");
		scanf("%d", &amount);
		totalCost = 10 * amount;
	}
	
	else if(fruitType == 'b' || fruitType == 'B')
	{
		printf("How many of that item you would like to buy?\n");
		scanf("%d", &amount);
		totalCost = 12 * amount;
	}
	
	else if (fruitType == 'c' || fruitType == 'C')
	{
		printf("How many of that item you would like to buy?\n");
		scanf("%d", &amount);
		totalCost = 7 * amount;
	}
	
	else{
		printf("Please enter a valid character!\n");
	}
	
	
	printf("The total cost is: %d cent\n", totalCost);
}