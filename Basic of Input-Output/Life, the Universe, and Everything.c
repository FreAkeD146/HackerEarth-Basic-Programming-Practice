/* Here are the steps to implement:

1. Declare an integer variable (num) to store the input numbers.
2. Use a while loop to continue reading input indefinitely (since the condition is always true).
3. Read the next integer from input using scanf().
4. Check if the number is 42. If yes, break out of the loop using break.

This code reads integers from the input until the number 42 is encountered. It prints each input integer to the output before checking if it's 42. If 42 is encountered, the loop breaks, and the program ends. */

#include <stdio.h>

int main() {
    int num;

    // Continue reading input until the number 42 is encountered
    while (1) {
        // Read the next integer from input
        scanf("%d", &num);

        // Check if the number is 42, if yes, break out of the loop
        if (num == 42) {
            break;
        }

        // Print the number to output
        printf("%d\n", num);
    }

    return 0;
}
