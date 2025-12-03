#include <stdio.h>

long long calculatePower(int base, int exponent)
{
    long long result = 1;

    if (exponent < 0)
    {
        printf("Negative exponents are not supported in this integer version.\n");
        return 0;
    }

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent (non-negative integer): ");
    scanf("%d", &exponent);

    long long power = calculatePower(base, exponent);
    printf("%d raised to the power %d is: %lld\n", base, exponent, power);

    return 0;
}