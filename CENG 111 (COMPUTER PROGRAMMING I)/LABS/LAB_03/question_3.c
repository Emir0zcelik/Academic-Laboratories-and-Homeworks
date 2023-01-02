#include <stdio.h>

int main(){
    int a, b, c, sum = 0;
    printf("Enter a three-digit binary number: ");
    scanf("%d %d %d", &a,&b,&c);

    if(a == 1){
        sum += a*4; 
    }
    if(b == 1){
        sum += a*2; 
    }
    if(c == 1){
        sum += a; 
    }

    printf("Decimal equilavent: %d", sum);
}