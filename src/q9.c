#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // read whole line including spaces

    printf("Enter the character to count: ");
    scanf(" %c", &ch);     // note the space before %c to skip newline

    // Count occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d time(s) in the string.\n", ch, count);

    return 0;
}