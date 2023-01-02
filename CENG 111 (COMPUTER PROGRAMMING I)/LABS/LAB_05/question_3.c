#include <stdio.h>

int main(){
	char select;
	
	printf("Input c for cuboid t for triangle prism: ");
	scanf("%c", &select);
	
	if(select == 't' || select == 'T'){
		double a, b, h, result;
		
		printf("Input angles of the base triangle: ");
		scanf("%lf %lf", &a, &b);
		printf("Input height of triangle prism: ");
		scanf("%lf", &h);
		result = a * b* h / 2;
		printf("Result: %lf", result);
	}
	
	else if(select == 'c' || select == 'C'){
			double a, b, c, result;
		
		printf("Input angles of the base rectangle: ");
		scanf("%lf %lf", &a, &b);
		printf("Input the angle of other rectangle: ");
		scanf("%lf", &c);
		result = a * b * c;
		printf("Result: %lf", result);
	}
	
	else{
		printf("Enter a valid choice!");
	}
}