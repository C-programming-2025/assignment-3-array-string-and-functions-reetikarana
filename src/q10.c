#include <stdio.h>

int main() {
    char a[100], b[100];
    int i=0, j=0;

    gets(a);
    gets(b);

    while(a[i] != '\0') i++;

    while(b[j] != '\0')
        a[i++] = b[j++];

    a[i] = '\0';

    puts(a);
    return 0;
}
// Write a C program to concatenate two strings without using the built-in string functions.
