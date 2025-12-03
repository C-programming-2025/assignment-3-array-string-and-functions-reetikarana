 #include <stdio.h>

int main() {
    int n1, n2;
    int a[50], b[50], c[100];  

    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of first sorted array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements of second sorted array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1) c[k++] = a[i++];
    while (j < n2) c[k++] = b[j++];

    printf("Merged sorted array:\n");
    for (int x = 0; x < n1 + n2; x++) {
        printf("%d ", c[x]);
    }
    printf("\n");

    return 0;
}