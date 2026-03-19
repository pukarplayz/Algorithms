#include <stdio.h>
#include <conio.h>
int main(void){
    int arr[] = {20, 10, 20, 4, 100};
    int n = 5;
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    printf("Second Largest element: %d", second_largest);
    getch();
}