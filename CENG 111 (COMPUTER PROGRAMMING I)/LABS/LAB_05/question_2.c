#include <stdio.h>

int main(){
	int age;
	
	printf("Please enter your age: ");
	scanf("%d", &age);
	
	if(age > 17){
		printf("Congratulations! You can vote!");
	}
	else{
		printf("Sorry! You are not eligible for voting.");
	}
}