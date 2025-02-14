#include <stdio.h>
#include <ctype.h> // Include for toupper/tolower

int main() {
    char a;
    scanf("%c", &a);

    // Use toupper to simplify vowel check
    a = toupper(a); // Convert to uppercase for easier comparison

    if (isalpha(a)) { // Check if it's an alphabet
        if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (isdigit(a)) { // Check if it's a digit
        printf("Digit");
    } else {
        printf("Special character");
    }

    return 0;
}