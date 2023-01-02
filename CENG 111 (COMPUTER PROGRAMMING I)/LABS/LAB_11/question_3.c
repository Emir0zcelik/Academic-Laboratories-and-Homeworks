#include <stdio.h>

void printTriangle(int n){
	int i = 0, j = 0, k = 0, a;	
	a = n;
	for(i = 1; i <= n; i++){
		
		for(k = 0; k < n + i - 3; k++){
			printf("  ");
		}
		int number = 0;
		for(j = 0; j < a * 2 -1 ; j++){
			printf(" %d", number);
			number += 2;
		}
		a--;
		printf("\n");
	}
}

int main(){
	int height;
	
	printf("Input height:");
	scanf("%d", &height);
	printTriangle(height);
		
	return 0;
}