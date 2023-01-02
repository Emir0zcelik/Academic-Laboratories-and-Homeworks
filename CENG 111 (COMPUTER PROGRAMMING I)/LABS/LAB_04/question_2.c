#include <stdio.h>
#include <math.h>


int main(){
	float side1, side2, angle;
	float side3;
	
	
	printf("Please enter the side lengths:");
	scanf("%f %f", &side1, &side2);
	printf("Please enter the angle(in degrees): ");
	scanf("%f", &angle);
	side3 = sqrt((pow(side1, 2) + pow(side2, 2)) - (2 * side1 * side2 * cos(angle * M_PI / 180)));
	printf("%f", side3);
	printf("The length of the other side: %.0f", side3) ;
}
