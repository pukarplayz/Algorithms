#include <stdio.h>
#include <conio.h>

int main(void){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    int i =0, j = n-1;
    while (i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j++;
    }

    for(int k = 0; k < n; k++){
        printf("%d", arr[k]);
    }
    
    return 0;
    
}