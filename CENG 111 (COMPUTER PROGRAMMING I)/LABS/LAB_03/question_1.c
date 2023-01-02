#include <stdio.h>

int main(){
    int a, b, c, sum = 0;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a,&b,&c);
    a = a*a;
    b = b*b;
    c = c*c;
    sum = a+b+c;

    printf("square of a: %d b: %d c: %d total: %d", a,b,c,sum);
}