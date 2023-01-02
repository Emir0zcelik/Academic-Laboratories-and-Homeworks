#include <stdio.h>

int f1(int N){
	int i = 0, sum = 0;
	for(i = 1; i <= N; i++){
		sum += i;
	}
	
	return sum;
}

int f2(int N){
	int i = 0, sum = 1;
	for(i = 1; i <= N; i++){
		sum *= i;
	}
	return sum;
}

void f3(int N){
	if(N < 0){
		printf("Undefined\n");
	}
}

int main(){
	int number;
	char choice;
	
	do{
		printf("Enter a number: ");
		scanf("%d", &number);
		
		if(number >= 0 && number <= 5){
			int sum = f2(number);
			printf("Sum: %d\n", sum);
		}
		
		if(number > 5){
			int sum = f1(number);
			printf("Sum: %d\n", sum);
		}
		
		if(number < 0){
			f3(number);
		}
		printf("Do you want to continue?(y/n)\n");
		scanf(" %c", &choice);
		
	}while(choice == 'y' || choice == 'Y');
	
	return 0;
}