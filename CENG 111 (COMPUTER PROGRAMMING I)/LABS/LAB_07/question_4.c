#include <stdlib.h>

int main(){
	char c, i, countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	printf("Enter a series of characters:");
	for(int i = 0; i < 20; i++){
		scanf(" %c", &c);
		
		if(c == 'A' || c == 'a'){
			countA++;
		}
		
		else if(c == 'E' || c == 'e'){
			countE++;
		}
		
		else if(c == 'I'){
			countI++;
		}
		
		else if(c == 'O' || c == 'o'){
			countO++;
		}
		
		else if(c == 'U' || c == 'u'){
			countU++;
		}
	}
	printf("A repeated %d time(s)\n", countA);
	printf("E repeated %d time(s)\n", countE);
	printf("I repeated %d time(s)\n", countI);
	printf("O repeated %d time(s)\n", countO);
	printf("U repeated %d time(s)\n", countU);
}
