#include <stdio.h>

int main(){
	
	int n = 1, sum = 0, i;
	
	printf("Enter an integer: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		if(n % 2 == 1){
			if(n % i == 0){
				sum += i;
			}
		}
	}
	
	printf("The sum of odd divisors of an inputted integer numbers: %d ",sum);
	
	return 0;
}