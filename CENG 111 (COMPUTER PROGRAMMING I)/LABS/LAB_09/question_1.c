#include <stdio.h>

int main(){
	int x, y, f = 1, i;
	
	printf("Enter x and y:");
		scanf("%d %d", &x,&y);
	
	while((x * y) > 0){
		if((x * y) % 2 == 0){
			for(i = 1; i <= y; i++){
				f = f * i;
			}
			printf("F = %d\n", f);		
		}
		
		else if((x * y) % 2 == 1){
			f = 3 * x;
			
			printf("F = %d\n", f);
		}
		printf("Enter x and y:");
		scanf("%d %d", &x,&y);
	}
	
	printf("Goodbye!");
	return 0;
}