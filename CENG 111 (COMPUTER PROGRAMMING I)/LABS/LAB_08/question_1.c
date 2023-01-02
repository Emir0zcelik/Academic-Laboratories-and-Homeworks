#include <stdio.h>

int main(){
	int n, count = 0;
	do{
		printf("Enter an even integer:");
		scanf("%d", &n);
		count++;
	}while(n %2 != 0);
	printf("%d attempts made!", count);
	
	return 0;
}