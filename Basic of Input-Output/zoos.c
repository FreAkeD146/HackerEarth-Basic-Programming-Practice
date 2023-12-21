/* Here are the steps to implement:

1. Declare a character array (zo) to store the input string.
2. Read the input string from the user.
3. Initialize counters (x and y) for 'z' and 'o'.
4. Iterate through the characters in the string using a loop.
 - If the current character is 'z', increment the 'z' counter (x).
 - If the current character is 'o', increment the 'o' counter (y).
 - If the current character is neither 'z' nor 'o', exit the loop.
5. Check if the number of 'z' characters is exactly half the number of 'o' characters.
 - Print "Yes" if the condition is true.
 - Print "No" otherwise.


This code appears to check if the input string contains twice as many 'z' characters as 'o' characters and prints "Yes" or "No" accordingly. */

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
