#include <stdio.h>

int main(){
	
	int a, b, i, pow = 1;
	
	printf("Enter a and b values:");
	scanf("%d %d", &a, &b);
	
	for(i = 0; i<b; i++){
		pow *= a;
	}
	
	printf("a^b = %d", pow);
	return 0;
}