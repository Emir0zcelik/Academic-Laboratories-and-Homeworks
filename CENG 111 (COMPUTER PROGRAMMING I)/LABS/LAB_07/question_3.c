#include <stdlib.h>

int main(){
	int n, countP = 0, countN = 0, sumN = 0, sumP = 0;
	
	while(n != -999)
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		
		if(n == -999)
		{
			break;
		}
		
		if(n > 0){
			sumP += n;
			countP++;
		}
		
		else if(n < 0){
			sumN += n;
			countN++;
		}
	}
	
	int averageN = sumN / countN;
	int averageP = sumP / countP;
	
	printf("Average value of positive integers: %d\n", averageP);
	printf("Average value of negative integers: %d", averageN);
}