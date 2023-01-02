#include <stdio.h>

int main(){
	char c;
	printf("Please enter a character: ");
	scanf("%c", &c);
	
	if((c > 64 && c < 91) || c > 96 && c < 122){
		printf("%c is a letter", c);
	}
	
	else{
		printf("%c is not a letter", c);
	}
}