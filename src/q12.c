#include <stdio.h>
int isPalindrome(char str[]) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return 0; 
        }
    }

    return 1;  
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}