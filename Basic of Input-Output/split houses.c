/*Here are the steps to implement:

1. Declare variables for the number of elements and a flag.
2. Input the number of elements (n).
3. Declare a character array (c) to store the input string.
4. Input the string (c).
5. Iterate through the characters in the string using a loop.
 - Check if two consecutive characters are 'H'. If yes, set the flag to 1.
 - If the current character is '.', replace it with 'B'.
6. Check the flag to determine the output.
 - If the flag is 1, print "NO".
 - If the flag is 0, print "YES" and the modified string.
This code appears to replace '.' with 'B' in the input string and check if there are consecutive 'H' characters. If 'HH' is found, it prints "NO"; otherwise, it prints "YES" along with the modified string. */

#include<stdio.h>

int main() {
    // Declare variables for the number of elements and a flag
    int n, flag = 0;

    // Input the number of elements
    scanf("%d", &n);

    // Declare a character array to store the input string
    char c[n];

    // Input the string
    scanf("%s", c);

    // Iterate through the characters in the string
    for (int i = 0; i < strlen(c); i++) {
        // Check if two consecutive characters are 'H'
        if (c[i] == 'H' && c[i + 1] == 'H') {
            flag = 1; // Set the flag to 1 if 'HH' is found
        } else {
            if (c[i] == '.') {
                c[i] = 'B'; // Replace '.' with 'B'
            }
        }
    }

    // Check the flag to determine the output
    if (flag == 1) {
        printf("NO\n"); // If 'HH' is found, print "NO"
    } else {
        printf("YES\n"); // If 'HH' is not found, print "YES"
        printf("%s", c); // Print the modified string
    }

    return 0;
}
