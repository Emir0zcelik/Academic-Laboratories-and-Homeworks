#include <stdio.h>

int main(){
	float xCoordinate, yCoordinate, aCoordinate, bCoordinate, r, px, py;
	
	printf("Enter a center points and the r value of the circle: (x coordinate, y coordinate and the r value):\n");
	scanf("%f %f %f", &aCoordinate, &bCoordinate, &r);
	
	printf("Enter the x, y coordinates of P point:\n");
	scanf("%f %f", &xCoordinate, &yCoordinate);
	
	float formula = ((xCoordinate-aCoordinate)*(xCoordinate-aCoordinate)) + ((yCoordinate-bCoordinate) * (yCoordinate-bCoordinate));
	
	if(formula <= (r*r))
	{
		printf("Point is in the circle");
	}
	
	else if(formula > (r*r)){
		printf("Point is not in the circle");
	}
}