#include <stdio.h>
#include <conio.h>
int main(void){
    float c, frt;
    
    printf("Enter Celsius: ");
    scanf("%f",&c);

    frt = ( c * (9/5) ) + 32;
    printf("%f",frt);
    getch();
}