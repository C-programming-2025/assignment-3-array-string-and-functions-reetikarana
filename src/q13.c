 #include <stdio.h>

unsigned long long findFactorial(int n) {
    if (n < 0) {
        return 0;
    }

    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        unsigned long long result = findFactorial(num);
        printf("Factorial of %d is %llu\n", num, result);
    }

    return 0;
}