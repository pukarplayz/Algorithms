#include <stdio.h>
int main(void) {
    int x;
    printf("Enter Your Number: ");
    scanf("%d",&x);
    if(x%2==0){
        printf("The number is Even");
    }
    else if (x==0){
        printf("The number is Neutral. ");
    }
    else{
        printf("The number is odd.");
    }
}