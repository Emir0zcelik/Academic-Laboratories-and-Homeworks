#include <stdio.h>
#include <math.h>

int main(){
    float radius;
    printf("Please enter the radius: ");
    scanf("%f", &radius);
    printf("Area is: %f", M_PI * radius* radius);
}