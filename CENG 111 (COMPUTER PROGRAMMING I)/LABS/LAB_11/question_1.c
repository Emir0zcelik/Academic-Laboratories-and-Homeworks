#include <stdio.h>

int functionAnd(int a, int b){
	return a & b;
}

int main(){
	int i = 1, j = 1;
	
	for(i = 1; i < 11; i++){
		for(j = 1; j < 11; j++){
			int valueAnd = functionAnd(i, j);
			printf("%d & %d is %d\n", i, j, valueAnd);
		}
	}
}