/* Steps to implement:

1. Include necessary header files (stdio.h, stdbool.h, stdlib.h, string.h).
2. Declare the function solve to count occurrences of character 'k' in string 'S'.
3. Declare variables for the number of test cases (T) and loop counter (i).
4. Input the number of test cases.
5. Process each test case in a loop.
6. Allocate memory for the string 'S'.
7. Input the string 'S'.
8. Input the character 'k'.
9. Call the solve function and print the result.
10. Free allocated memory for the string 'S'.
11. Increment the loop counter.
12. Return 0, indicating successful execution.

This program counts the occurrences of a given character in each input string for multiple test cases.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Function to count occurrences of character 'k' in string 'S'
int solve(char *S, char k) {
    int count = 0;
    int i = 0;

    // Loop to count occurrences of character 'k' in string 'S'
    while (1) {
        if (S[i] == k) {
            count++;
        }

        // Break the loop when the end of the string is reached
        if (i >= strlen(S)) {
            break;
        }

        i++;
    }

    return count;
}

int main() {
    int T;

    // Input the number of test cases
    scanf("%d", &T);

    int i = 1;

    // Process each test case
    while (i <= T) {
        // Allocate memory for the string 'S'
        char *S = (char *)malloc(200000 * sizeof(char));

        // Input the string 'S'
        scanf("\n%[^\n]s", S);

        char k;

        // Input the character 'k'
        scanf(" %c", &k);

        // Call the solve function and print the result
        int out_ = solve(S, k);
        printf("%d\n", out_);

        // Free allocated memory for the string 'S'
        free(S);

        i++;
    }

    return 0;
}
