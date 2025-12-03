#include <stdio.h>

int countOccurrences(char str[], char ch, int index) {
    if (str[index] == '\0') {
        return 0; 
    }
    int count = (str[index] == ch) ? 1 : 0;
    return count + countOccurrences(str, ch, index + 1);
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    getchar(); 
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int result = countOccurrences(str, ch, 0);
    printf("The character '%c' occurs %d time(s) in the string.\n", ch, result);

    return 0;
}