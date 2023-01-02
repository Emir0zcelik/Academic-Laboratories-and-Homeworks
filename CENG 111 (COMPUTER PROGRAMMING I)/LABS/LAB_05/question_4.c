#include <stdio.h>

int main(){
	int mid1, mid2, fin, total;
	
	printf("Please Enter Midterms: ");
	scanf("%d %d", &mid1, &mid2 );
	
	printf("Please Enter Final: ");
	scanf("%d", &fin);
	
	total = ((mid1*3) / 10) + ((mid2 *3) / 10) + ((fin *4)/10);
	
	printf("Your Total grade: %d\n", total);
	
	if(total >=85 && total <= 100){
		printf("You get: A");
	}
	
	else if(total >=70 && total < 85){
		printf("You get: B");
	}
	
	else if(total >=55 && total < 70){
		printf("You get: C");
	}
	
	else if(total >=40 && total < 55){
		printf("You get: D");
	}
	
	else if(total >=0 && total < 40){
		printf("You get: F");
	}
	
}