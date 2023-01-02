#include <stdio.h>

int main(){
	int n, i, age, sumOfFemale = 0, sumOfMale = 0, countM = 0, countF = 0, countM1 = 0, countF2 = 0;
	char gender;
	printf("Enter n:");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
		printf("Enter gender and age information:");
		scanf(" %c %d", &gender, &age);
		
		if(gender == 'F' || gender == 'f')
		{
			countF++;
		}
		
		if(gender == 'M' || gender == 'm')
		{
			countM++;
		}
		
		if((gender == 'F' || gender == 'f') && age > 30){
			sumOfFemale += age;	
			countF2++;
		}
		
		else if((gender == 'M' || gender == 'm') && age < 50){
			sumOfMale += age;
			countM1++;
		}
	}
	
	int averageMale = sumOfMale / countM;
	int averageFemale = sumOfFemale / countF;
	
	printf("Number of female workers older than 30 is: %d\n", countF2);
	printf("Number of male workers younger than 50 is: %d\n", countM1);
	printf("Average age of male workers: %d\n", averageMale);
	printf("Average age of female workers: %d", averageFemale);	
}
                 