#include <stdio.h>


unsigned long long calculateFibonacci(int n) {
    if (n < 0) {
        return 0; 
    }
    if (n == 0) return 0; 
    if (n == 1) return 1; 
    return calculateFibonacci(n - 1) + calculateFibonacci(n - 2); 
}

int main() {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. n must be non-negative.\n");
    } else {
        unsigned long long fib = calculateFibonacci(n);
        printf("The %dth Fibonacci number is: %llu\n", n, fib);
    }

    return 0;
}