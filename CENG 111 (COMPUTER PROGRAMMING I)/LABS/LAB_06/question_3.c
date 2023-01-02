#include <stdio.h>

int main(){
	char powerType;
	float kiloWatt;
	
	printf("Enter a kilowatt value:\n");
	scanf("%f", &kiloWatt);
	
	
	printf("Enter the power type you want: (h, f, g, m, k)\n");
	scanf(" %c", &powerType);
	
	if(powerType == 'h')
	{
		printf("Kilowatt to horsepower: %f", kiloWatt * 1.34);
	}
	
	else if(powerType == 'f')
	{
		printf("Kilowatt to foot-pound: %f", kiloWatt* 1000);
	}
	
	else if(powerType == 'g')
	{
		printf("Kilowatt to gigawatt: %f", kiloWatt * 0.0001);
	}
	
	else if(powerType == 'm')
	{
		printf("Kilowatt to megawatt: %f", kiloWatt * 0.001);
	}
	
	else
	{
		printf("Please enter a valid input.\n");
	}
}