#include <stdio.h>


int calculateGCD(int a, int b) {
    if (b == 0)
        return a; 
    return calculateGCD(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == 0 && num2 == 0) {
        printf("GCD is not defined for both numbers being zero.\n");
    } else {
        int gcd = calculateGCD(num1, num2);
        printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
    }

    return 0;
}