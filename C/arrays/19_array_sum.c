#include <stdio.h>
#include<conio.h>

int main(void){
    int n,i,sum = 0;

    printf("Enter number of elements");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d Elements:\n ");
    for(i = 0; i<n,i++;){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n",sum);
    getch();

    return 0;
}