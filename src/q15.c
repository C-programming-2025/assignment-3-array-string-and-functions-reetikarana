 #include <stdio.h>
int countOccurrences(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    getchar(); 

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    int result = countOccurrences(str, ch);
    printf("The character '%c' occurs %d time(s) in the string.\n", ch, result);

    return 0;
}