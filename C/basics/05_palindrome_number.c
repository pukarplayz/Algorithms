#include <stdio.h>
int main(void){
    int original, number, reverse,digit;
    printf("Enter Your Number");
    scanf("%d",number);

    original = number;
    reverse = 0;
    while (number<0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    if (reverse==original)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number isnot palindrome");
    }
    
    return 0;
}