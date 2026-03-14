#include <stdio.h>
int main(void){
    int x,y;
    x = 5;
    y = 6;
    
    x = x+y; // Adding
    y = x-y; // Subtracting.
    x = x-y;
    printf("%d, %d",x,y);
}