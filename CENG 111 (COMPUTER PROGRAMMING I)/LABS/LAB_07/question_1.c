#include <stdlib.h>
#include <math.h>

int main(){
	
	int i;
	
	for(i = 1; i <= 10; i++){
		if(i%2 == 0){
			double number = sqrt(i);
			printf("The square root of %d is %lf\n", i, number);
		} 	
	}
}