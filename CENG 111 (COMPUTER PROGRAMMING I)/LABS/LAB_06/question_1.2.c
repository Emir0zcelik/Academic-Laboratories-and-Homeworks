#include <stdio.h>

int main(){
	char fruitType;
	int totalCost, amount;
	
	printf("What type of fruit you would like to have? (enter a for apples, b for bananas and c for carrots)\n");
	scanf("%c", &fruitType);
	
	switch (fruitType)
	{
			case 'a':
			printf("How many of that item you would like to buy?\n");
			scanf("%d", &amount);
			totalCost = 10 * amount;
			break;
		case 'b':
			printf("How many of that item you would like to buy?\n");
			scanf("%d", &amount);
			totalCost = 12 * amount;
			break;
		case 'c':
			printf("How many of that item you would like to buy?\n");
			scanf("%d", &amount);
			totalCost = 7 * amount;
			break;
		default:
			printf("Please enter a valid character!\n");
			break;
	}
	
	printf("The total cost is: %d cent\n", totalCost);
}