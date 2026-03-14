#include <stdio.h>
int main(void){
    int number, reverse,digit;

    printf("Enter Your Number");
    scanf("%d",&number);

    while (number>0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    
    return 0;
}