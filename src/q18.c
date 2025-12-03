#include <stdio.h>

void findPrimeNumbers(int n) {
    if (n < 2) {
        printf("No prime numbers in this range.\n");
        return;
    }

    printf("Prime numbers from 1 to %d:\n", n);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1; 

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    findPrimeNumbers(n);

    return 0;
}