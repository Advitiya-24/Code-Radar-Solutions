#include <stdio.h>

int main() {
    int n;

    // Take user input
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
