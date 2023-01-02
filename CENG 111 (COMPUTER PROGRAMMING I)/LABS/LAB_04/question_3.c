#include <stdio.h>

int main(){
    int ten, five, one, money, moneyInit;

    printf("Please enter amount of TL: ");
    scanf("%d", &money);
    moneyInit = money;
    ten = money / 10;
    
    money = money - ten * 10;
    
    five = money / 5;
    
    money = money - five * 5;
    
    one = money / 1;
    
    money = money - one * 1;
    
    printf("%d TL is equal to  %d 10 TL, %d 5 TL and %d 1TL", moneyInit, ten, five, one);
}