#include <stdio.h>

int main(){
    float a, b, c;
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a,&b,&c);
    float sum = (a + b)/2 + 3*c;
    printf("%.2f", sum);
}