#include <stdio.h>

int main() {
    int n;

    // Ask the user for input
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    // Loop for each row
    for (int i = 0; i < n; i++) {
        // Loop for each column
        for (int j = 0; j < n; j++) {
            // Print '*' for the border and space for hollow inside
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
