#include <stdio.h>

double convertTemperature(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    double fahrenheit = convertTemperature(celsius);

    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}