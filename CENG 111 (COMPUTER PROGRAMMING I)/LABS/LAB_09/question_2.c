#include <stdio.h>

int main(){
	int i, j, n, temp = 1;
	printf("Enter n: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		
		for(j = 0; j < n; j++){
			if(i / 10 == 0){
				printf("%d     	", temp);
				temp++;
			}
			else
			{
				printf("%d ", temp);
				temp++;	
			}			
		}
		printf("\n");
	}
}

