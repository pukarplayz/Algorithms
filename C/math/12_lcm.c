#include <stdio.h>

int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a;
    int y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
