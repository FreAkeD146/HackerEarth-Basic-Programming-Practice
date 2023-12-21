#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array to store input
    char zo[21];

    // Read the input string
    scanf("%s", &zo);

    // Initialize counters for 'z' and 'o'
    int x = 0, y = 0;

    // Iterate through the characters in the string
    for (int i = 0; i < 21; i++) {
        if (zo[i] == 'z') {
            x++; // Increment 'z' counter
        } else if (zo[i] == 'o') {
            y++; // Increment 'o' counter
        } else {
            break; // Exit the loop if a character other than 'z' or 'o' is encountered
        }
    }

    // Check if the number of 'z' is half the number of 'o'
    if (2 * x == y) {
        printf("Yes"); // Print "Yes" if the condition is true
    } else {
        printf("No");  // Print "No" otherwise
    }

    return 0;
}
