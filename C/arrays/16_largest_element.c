#include <stdio.h>
int main(void){
    int arr[] = {20, 10, 20, 4, 100};
    int n = 5;
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
    }
    printf("Largest element: %d", largest);
}