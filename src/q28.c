#include <stdio.h>
#include <string.h>

void calculateBinary(int n) {
    if (n == 0)
        return; 

    calculateBinary(n / 2);        
    printf("%d", n % 2);          
}

int main() {
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
    } else {
        printf("Binary: ");
        calculateBinary(n);
        printf("\n");
    }

    return 0;
}