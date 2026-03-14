#include <stdio.h>

int main(void) {
    int number[4]; 
    int i;

    for (i = 0; i < 4; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    int large = number[0];
    for (i = 1; i < 4; i++) {
        if (number[i] > large) {
            large = number[i];
        }
    }

    printf("The largest number is %d\n", large);
    return 0;
}